#!/usr/bin/python
import logging
import click
import os

from SolaceMgr import SolaceMgr
from Vpn import Vpn
# from vpn_commands import aclprofile
from common import *
from commands import *


import configparser




class GetDefaults:
    def __init__(self, ctx, kwargs):
        # logger.debug('GetDefaults - Start')
        # logger.debug(f"KWARGS {kwargs}")

        config = configparser.ConfigParser()
        ctx.ensure_object(dict)
        obj = ctx.obj
        # logging.debug(obj)
        try:
            config.read(os.path.expanduser('~/.splus.cfg'))
            obj['default-vpn'] = config['GLOBAL'].get('default-vpn', '')
            obj['broker-url'] = config['GLOBAL'].get('broker-url', '')
            obj['broker-username'] = config['GLOBAL'].get('broker-username', '')
            obj['broker-password'] = config['GLOBAL'].get('broker-password', '')

        except Exception as err:
            logging.debug(f'Cannot load defaults  {err}')

        if kwargs['default_vpn'] != None:
            obj['default-vpn'] = kwargs['default-vpn']
        if kwargs['broker_url'] != None:
            obj['broker-url'] = kwargs['broker_url']
        if kwargs['broker_username'] != None:
            obj['broker-username'] = kwargs['broker_username']
        if kwargs['broker_password'] != None:
            obj['broker-password'] = kwargs['broker_password']

        # logging.debug(obj)
        global sm
        sm = SolaceMgr(username=obj["broker-username"], password=obj["broker-password"], url=obj["broker-url"])
        # logger.debug('GetDefaults - End')


pass




def initSetup(debug):
    logging.basicConfig(format='%(levelname)-8s [%(filename)s:%(lineno)d] %(message)s',
                        datefmt='%Y-%m-%d:%H:%M:%S',
                        level=(logging.DEBUG if debug else logging.INFO),
                        )
    global logger
    logger = logging.getLogger(__name__)


@click.group()
@click.option('--debug/--no-debug', default=True)
@click.pass_context
def cli(ctx, debug):
    # logger.debug('Debug mode is %s' % ('on' if debug else 'off'))

    initSetup(debug)

    # ctx.ensure_object(dict)
    # ctx.obj['TEST1'] = 1
    # GetDefaults(ctx.obj)
    # logger.info(f"DEFAULTS {ctx.obj}")
    # ctx.obj['DEBUG'] = debug


    pass


@cli.command()
@click.option('--default-vpn')
@click.option('--broker-url', default="http://localhost:8080", show_default=True, )
@click.option('--broker-username', required=True)
@click.option('--broker-password', required=True)
@click.pass_context
def config(ctx, default_vpn, broker_url, broker_username, broker_password):
    # logger.debug('=====>Debug is %s' % (ctx.obj['DEBUG'] and 'on' or 'off'))
    logger.debug(f"I'll handle the Config {broker_url} {broker_username} {broker_password}")
    """
    Store configuration values in a file.
    """
    config_file = os.path.expanduser('~/.splus.cfg')

    with open(config_file, 'w') as cfg:
        cfg.write(f"[GLOBAL]\n")
        cfg.write(f"default-vpn={default_vpn}\n")
        cfg.write(f"broker-url={broker_url}\n")
        cfg.write(f"broker-username={broker_username}\n")
        cfg.write(f"broker-password={broker_password}\n")

    # logger.debug("CONTEXT")
    # logger.debug(ctx.obj)


cli.add_command(aclprofile)


@cli.group()  # @cli, not @click!
@my_global_options
def msgvpn(**kwargs):
    pass

@cli.command()
@click.option(
    '--default-vpn',
    help='your API key for the OpenWeatherMap API',
)
@click.option(
    '--config-file', '-c',
    type=click.Path(),
    default='~/.splus.cfg',
)
def test1(default_vpn, config_file):
    print(f'test1 {default_vpn} {config_file}')

@msgvpn.command(name='create')
@my_global_options
@click.option('--basicauth', is_flag=True, default=False)
@click.option('--dmr/--no-dmr', default=False, show_default=True)
@click.option('--enable/--disable', default=False, show_default=True)
@click.argument("vpnname")
@click.pass_context
def msgvpn_create(ctx, vpnname, **kwargs):
    try:
        # logger.debug(f"msgvpn_create - START {vpnname}")
        GetDefaults(ctx, kwargs)

        dict = {
            "authenticationBasicEnabled": True if 'basicauth' in kwargs else False,
            "dmrEnabled": kwargs['dmr'],
            "enabled": kwargs['enable'],
        }
        vpn = Vpn(sm)
        res = vpn.createVpn(vpnname, dict)
        logger.debug(res)
        logger.debug("msgvpn_create - END")
    except Exception as ex:
        logger.error(f"msgvpn_create - END + {ex}")


@msgvpn.command(name='delete')
@click.argument("vpnname")
@my_global_options
@click.pass_context
def msgvpn_delete(ctx, vpnname, **kwargs):
    GetDefaults(ctx, kwargs)
    vpn = Vpn(sm)
    res = vpn.deleteVpn(vpnname)
    logging.debug(res)
    print('-----------')
    print(res)

@msgvpn.command(name='list')
@my_global_options
@click.pass_context
def msgvpn_list(ctx, **kwargs):
    GetDefaults(ctx, kwargs)
    vpn = Vpn(sm)
    res = vpn.getAllVpn()
    logging.debug(res)
    print('-----------')
    print(res)



if __name__ == '__main__':
    cli()

#!/usr/bin/python
import logging
import logging.config

import click
import os

from SolaceMgr import SolaceMgr

from common import *
from commands import *
import configparser


class GetDefaults:
    def __init__(self, ctx, kwargs):
        logger.debug('GetDefaults - Start')
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
cli.add_command(msgvpn)
cli.add_command(user)
cli.add_command(clientprofile)
cli.add_command(queue)
cli.add_command(jndi)
cli.add_command(rest)
cli.add_command(alert)
cli.add_command(broker)
cli.add_command(ca)
cli.add_command(mesh)
cli.add_command(service)

if __name__ == '__main__':

    logging.config.fileConfig(fname='conf/logging.conf', disable_existing_loggers=False)
    logger = logging.getLogger(__name__)

    logger.debug('debug message')
    logger.info('info message')
    logger.warning('warn message')
    logger.error('error message')
    logger.critical('critical message')


    # debug = True
    # logging.basicConfig(format='%(levelname)-8s [%(filename)s:%(lineno)d] %(message)s',
    #                     datefmt='%Y-%m-%d:%H:%M:%S',
    #                     level=logging.DEBUG,
    #                     )
    # logger = logging.getLogger(__name__)

    cli()

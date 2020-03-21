#!/usr/bin/python
import logging
import click
import os

from SolaceMgr import SolaceMgr
from managers import Vpn
from common import *


import configparser

logger = logging.getLogger(__name__)


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
            logger.debug(f'Cannot load defaults  {err}')

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
    pass

@click.group()  # @cli, not @click!
@my_global_options
def msgvpn(**kwargs):
    pass


@msgvpn.command(name='create')
@my_global_options
@click.option('--basicauth', is_flag=True, default=False)
@click.option('--dmr/--no-dmr', default=False, show_default=True)
@click.option('--enable/--disable', default=False, show_default=True)
@click.argument("vpnname")
@click.pass_context
def msgvpn_create(ctx, vpnname, **kwargs):
    try:
        logger.debug(f"msgvpn_create - START {vpnname}")
        GetDefaults(ctx, kwargs)
        dict = {
            "authenticationBasicEnabled": True if 'basicauth' in kwargs else False,
            "dmrEnabled": kwargs['dmr'],
            "enabled": kwargs['enable'],
        }
        vpn = Vpn(sm)
        res = vpn.createVpn(vpnname, dict)
        logger.debug("msgvpn_create - END")
    except Exception as ex:
        print('ERRROR')
        logger.error(f"msgvpn_create - END + {ex}")


@msgvpn.command(name='delete')
@click.argument("vpnname")
@my_global_options
@click.pass_context
def msgvpn_delete(ctx, vpnname, **kwargs):
    GetDefaults(ctx, kwargs)
    vpn = Vpn(sm)
    res = vpn.deleteVpn(vpnname)
    logger.debug(res)
    print('-----------')

@msgvpn.command(name='list')
@my_global_options
@click.pass_context
def msgvpn_list(ctx, **kwargs):
    print('msgvpn_list')

    GetDefaults(ctx, kwargs)
    vpn = Vpn(sm)
    res = vpn.getAllVpn()
    logger.debug(res)
    print('-----------')


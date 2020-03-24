#!/usr/bin/python
import logging
import click

from managers import Vpn
from common import *

logger = logging.getLogger(__name__)


@click.group()
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
        sm = getSolaceMgr(ctx, kwargs)
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
# @my_global_options
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


#!/usr/bin/python
import logging
import click

from common import *
from managers import RestMgr

logger = logging.getLogger(__name__)


@click.group()
def msgvpn(**kwargs):
    pass


@click.option('--exclusive/--no-exclusive', default=False, show_default=True,
              help='Access type for delivering messages')


@msgvpn.command(name='create')
@my_global_options
@click.option('--basic-auth/--no-basic-auth', default=True, show_default=True,
            help='Basic authentication that involves the use of a username and password to prove identity ')
@click.option('--dmr/--no-dmr', default=False, show_default=True)
@click.option('--enable/--disable', default=False, show_default=True)
@click.argument("vpnname")
@click.pass_context
def msgvpn_create(ctx, vpnname, basic_auth, dmr, **kwargs):
        logger.debug(f"msgvpn_create {vpnname}")
        dict = {
            "msgVpnName": f"{vpnname}",
            "authenticationBasicEnabled": True if basic_auth else False,
            "dmrEnabled": dmr,
            "enabled": kwargs['enable'],
        }
        rest_mgr = RestMgr(kwargs)
        rest_mgr.post('msgVpns', dict, False)


@msgvpn.command(name='delete')
@click.argument("vpnname")
@my_global_options
@click.pass_context
def msgvpn_delete(ctx, vpnname, **kwargs):
    logger.debug(f"msgvpn_delete {vpnname}")
    rest_mgr = RestMgr(kwargs)
    rest_mgr.delete('msgVpns', vpnname, False)


@msgvpn.command(name='list')
@my_global_options
@click.pass_context
def msgvpn_list(ctx, **kwargs):
    logger.debug(f"msgvpn_list")
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.get('msgVpns?select=msgVpnName', None, False)


@msgvpn.command(name='get')
@my_global_options
@click.pass_context
@click.argument("vpnname")
def msgvpn_get(ctx, vpnname, **kwargs):
    logger.debug(f"msgvpn_list")
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.get('msgVpns', vpnname, False)


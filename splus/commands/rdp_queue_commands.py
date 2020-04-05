import logging

import click
from commands import *
from common import *
from managers import RestMgr

logger = logging.getLogger(__name__)

suburl1 = 'restDeliveryPoints'
suburl = 'queueBindings'


@click.group(name='queue')
def rdp_queue():
    pass


@rdp_queue.command()
@click.argument("name")
@my_global_options
@click.option('--replace-request-target/--no-replace-request-target', default=False, show_default=True,
              help='Manage whether the authority for the request-target is replaced with that configured for the REST Consumer remote host configuration')
@click.option('--request-target',
              help='POST request-target string to use when sending requests. This configuration is only applicable when the Message VPN is in REST messaging mode')
@click.option('--rdp', required=True,
              help='Name of the REST Delivery Point (RDP)')
def create(
        name,
        replace_request_target, request_target, rdp,
        **kwargs):
    upsert(True, name,
           replace_request_target, request_target, rdp,
           **kwargs)


def upsert(is_post, name,
           replace_request_target, request_target, rdp,
           **kwargs):
    try:
        logging.debug('start')

        dict = {}

        add_if(dict, replace_request_target, 'gatewayReplaceTargetAuthorityEnabled')
        add_if(dict, request_target, 'postRequestTarget', request_target)
        add_if(dict, name, 'queueBindingName', name)
        add_if(dict, rdp, 'restDeliveryPointName', rdp)

        rest_mgr = RestMgr(kwargs)
        if is_post:
            rest_mgr.post(f'{suburl1}/{rdp}/{suburl}', dict)
        else:
            rest_mgr.patch(f'{suburl1}/{rdp}/{suburl}', name, dict)
    except Exception as ex:
        logger.error(f"upsert Exception: {ex}")


@rdp_queue.command()
@click.argument("name")
@my_global_options
@click.option('--replace-request-target/--no-replace-request-target', default=None,
              help='Manage whether the authority for the request-target is replaced with that configured for the REST Consumer remote host configuration')
@click.option('--request-target',
              help='POST request-target string to use when sending requests. This configuration is only applicable when the Message VPN is in REST messaging mode')
@click.option('--rdp', required=True,
              help='Name of the REST Delivery Point (RDP)')
def update(
        name,
        replace_request_target, request_target, rdp,
        **kwargs):
    upsert(False, name,
           replace_request_target, request_target, rdp,
           **kwargs)


@rdp_queue.command()
@click.argument("name")
@my_global_options
@click.option('--rdp', required=True,
              help='Name of the REST Delivery Point (RDP)')
def show(name, rdp, **kwargs):
    try:
        rest_mgr = RestMgr(kwargs)
        rest_mgr.get(f'{suburl1}/{rdp}/{suburl}', name)
    except Exception as ex:
        logger.error(f"{ex}")


@rdp_queue.command()
@my_global_options
@click.option('--rdp', required=True,
              help='Name of the REST Delivery Point (RDP)')
def list(rdp, **kwargs):
    try:
        rest_mgr = RestMgr(kwargs)
        rest_mgr.get(f'{suburl1}/{rdp}/{suburl}')
    except Exception as ex:
        logger.error(f"{ex}")


@rdp_queue.command()
@click.argument("name")
@my_global_options
def remove(name, **kwargs):
    try:
        logger.debug(f"remove {name}")
        rest_mgr = RestMgr(kwargs)
        rest_mgr.delete(suburl, name)
    except Exception as ex:
        logger.error(f"{ex}")

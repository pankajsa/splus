import logging

import click
from commands import *
from common import *
from managers import RestMgr

logger = logging.getLogger(__name__)

suburl = 'restDeliveryPoints'


@click.group()
def rdp():
    pass


rdp.add_command(rdp_queue)
rdp.add_command(rdp_rc)


@rdp.command()
@click.argument("name")
@my_global_options
@click.option('--client-profile', default='default', show_default=True,
              help='Client Profile of the REST Delivery Point. It must exist in the local Message VPN. Its TCP parameters are used for all REST Consumers in this RDP. Its queue properties are used by the RDP client. The Client Profile is used inside the auto-generated Client Username for this RDP.')
@click.option('--enable/--no-enable', default=True, show_default=True,
              help='Manage the REST Delivery Point. When disabled, no connections are initiated or messages delivered to any of the contained REST Consumers.')
@click.option('--max-spool', default=0, show_default=True,
              help='The maximum spool usage, in megabytes, allowed by the Replay Log. If this limit is exceeded, old messages will be trimmed.')
def create(
        name,
        client_profile, enable,
        **kwargs):
    upsert(True, name,
           client_profile, enable,
           **kwargs)


def upsert(is_post, name,
           client_profile, enable,
           **kwargs):
    try:
        logging.debug('start')

        dict = {}

        add_if(dict, client_profile, 'clientProfileName', client_profile)
        add_if(dict, enable, 'enabled')
        add_if(dict, name, 'restDeliveryPointName', name)

        rest_mgr = RestMgr(kwargs)
        if is_post:
            rest_mgr.post(suburl, dict)
        else:
            rest_mgr.patch(suburl, name, dict)
    except Exception as ex:
        logger.error(f"upsert Exception: {ex}")


@rdp.command()
@click.argument("name")
@my_global_options
@click.option('--enable-egress/--no-enable-egress', default=None,
              help='Manage transmission of messages from the replay log')
@click.option('--enable-ingress/--no-enable-ingress', default=None,
              help='Manage transmission of messages from the replay log')
@click.option('--max-spool', type=int,
              help='The maximum spool usage, in megabytes, allowed by the Replay Log. If this limit is exceeded, old messages will be trimmed.')
def update(
        name,
        enable_egress, enable_ingress, max_spool,
        **kwargs):
    upsert(False, name,
           enable_egress, enable_ingress, max_spool,
           **kwargs)


@rdp.command()
@click.argument("name")
@my_global_options
def show(name, **kwargs):
    try:
        rest_mgr = RestMgr(kwargs)
        rest_mgr.get(suburl, name)
    except Exception as ex:
        logger.error(f"{ex}")


@rdp.command()
@click.pass_context
@my_global_options
def list(ctx, **kwargs):
    try:
        rest_mgr = RestMgr(kwargs)
        rest_mgr.get(suburl)
    except Exception as ex:
        logger.error(f"{ex}")


@rdp.command()
@click.argument("name")
@my_global_options
def remove(name, **kwargs):
    try:
        logger.debug(f"remove {name}")
        rest_mgr = RestMgr(kwargs)
        rest_mgr.delete(suburl, name)
    except Exception as ex:
        logger.error(f"{ex}")

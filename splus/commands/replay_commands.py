import logging

import click
from common import *
from managers import RestMgr

logger = logging.getLogger(__name__)

suburl = 'replayLogs'


@click.group()
def replay():
    pass


@replay.command()
@click.argument("name")
@my_global_options
@click.option('--enable-egress/--no-enable-egress', default=True, show_default=True,
              help='Manage transmission of messages from the replay log')
@click.option('--enable-ingress/--no-enable-ingress', default=True, show_default=True,
              help='Manage transmission of messages from the replay log')
@click.option('--max-spool', default=0, show_default=True,
              help='The maximum spool usage, in megabytes, allowed by the Replay Log. If this limit is exceeded, old messages will be trimmed.')
def create(
        name,
        enable_egress, enable_ingress, max_spool,
        **kwargs):
    upsert(True, name,
           enable_egress, enable_ingress, max_spool,
           **kwargs)


def upsert(is_post, name,
           enable_egress, enable_ingress, max_spool,
           **kwargs):
    try:
        logging.debug('start')

        dict = {}

        add_if(dict, enable_egress, 'egressEnabled')
        add_if(dict, enable_ingress, 'ingressEnabled')
        add_if(dict, max_spool, 'maxSpoolUsage', max_spool, 0)
        add_if(dict, name, 'replayLogName', name)

        rest_mgr = RestMgr(kwargs)
        if is_post:
            rest_mgr.post(suburl, dict)
        else:
            rest_mgr.patch(suburl, name, dict)
    except Exception as ex:
        logger.error(f"upsert Exception: {ex}")


@replay.command()
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


@replay.command()
@click.argument("name")
@my_global_options
def show(name, **kwargs):
    try:
        rest_mgr = RestMgr(kwargs)
        rest_mgr.get(suburl, name)
    except Exception as ex:
        logger.error(f"{ex}")


@replay.command()
@click.pass_context
@my_global_options
def list(ctx, **kwargs):
    try:
        rest_mgr = RestMgr(kwargs)
        rest_mgr.get(suburl)
    except Exception as ex:
        logger.error(f"{ex}")


@replay.command()
@click.argument("name")
@my_global_options
def remove(name, **kwargs):
    try:
        logger.debug(f"remove {name}")
        rest_mgr = RestMgr(kwargs)
        rest_mgr.delete(suburl, name)
    except Exception as ex:
        logger.error(f"{ex}")

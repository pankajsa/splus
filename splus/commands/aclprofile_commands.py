import logging
import click

from common import *
from managers import RestMgr

logger = logging.getLogger(__name__)


@click.group()
def aclprofile():
    pass

@aclprofile.command(name='create')
@click.argument("name")
@my_global_options
@click.option('--default-connect/--no-default-connect', default=True, show_default=True,
              help='The default connect action to take when a client connects to the Message VPN')
@click.option('--default-publish/--no-default-publish', default=True, show_default=True,
              help='The default publish action to take when a client publishes to a topic')
@click.option('--default-subscribe/--no-default-subscribe', default=True, show_default=True,
              help='The default subscribe action to take when a client subscribes to a topic')
@click.option('--default-share/--no-default-share', default=True, show_default=True,
              help='The default connect action to take when a client subscribes to a share-name')
def aclprofile_create(name, default_connect, default_publish, default_subscribe, default_share, **kwargs):
    try:
        logging.debug('start')
        dict = {
            'aclProfileName': name,
            'clientConnectDefaultAction': 'allow' if default_connect else 'disallow',
            'publishTopicDefaultAction': 'allow' if default_publish else 'disallow',
            'subscribeTopicDefaultAction': 'allow' if default_subscribe else 'disallow',
            'subscribeShareNameDefaultAction': 'allow' if default_share else 'disallow',
        }
        rest_mgr = RestMgr(kwargs)
        rest_mgr.post('aclProfiles', dict)
    except Exception as ex:
        logger.error(f"create Exception: {ex}")




@aclprofile.command(name='update')
@click.argument("name")
@click.pass_context
@my_global_options
@click.option('--default-connect/--no-default-connect', default=None,
              help='The default connect action to take when a client connects to the Message VPN')
@click.option('--default-publish/--no-default-publish', default=None,
              help='The default publish action to take when a client publishes to a topic')
@click.option('--default-subscribe/--no-default-subscribe', default=None,
              help='The default subscribe action to take when a client subscribes to a topic')
@click.option('--default-share/--no-default-share', default=None,
              help='The default connect action to take when a client subscribes to a share-name')
def aclprofile_update(ctx, name, default_connect, default_publish, default_subscribe, default_share, **kwargs):
    logging.debug('start')
    try:
        dict = {}

        add_if(dict, default_connect, 'clientConnectDefaultAction', 'allow', 'disallow')
        add_if(dict, default_publish, 'publishTopicDefaultAction', 'allow', 'disallow')
        add_if(dict, default_subscribe, 'subscribeTopicDefaultAction', 'allow', 'disallow')
        add_if(dict, default_share, 'subscribeShareNameDefaultAction', 'allow', 'disallow')

        rest_mgr = RestMgr(kwargs)
        rest_mgr.patch('aclProfiles', name, dict)

        logger.debug(dict)
    except Exception as ex:
        logger.error(f"create Exception: {ex}")

@aclprofile.command(name='show')
@click.argument("name")
@my_global_options
def aclprofile_show( name, **kwargs):
    try:
        rest_mgr = RestMgr(kwargs)
        rest_mgr.get('aclProfiles', name)
    except Exception as ex:
        logger.error(f"{ex}")


@aclprofile.command(name='list')
@click.pass_context
@my_global_options
def aclprofile_list(ctx, **kwargs):
    try:
        rest_mgr = RestMgr(kwargs)
        rest_mgr.get('aclProfiles')
    except Exception as ex:
        logger.error(f"{ex}")

@aclprofile.command(name='remove')
@click.argument("name")
@my_global_options
def aclprofile_remove(name, **kwargs):
    try:
        logger.debug(f"remove {name}")
        rest_mgr = RestMgr(kwargs)
        rest_mgr.delete('aclProfiles', name)
    except Exception as ex:
        logger.error(f"{ex}")


import logging
import click

from common import *
from managers import RestMgr

suburl = 'aclProfiles'

logger = logging.getLogger(__name__)


@click.group()
def aclprofile():
    '''Manage the ACL Profiles in a Message VPN'''
    pass

@aclprofile.command()
@click.argument("name")
@click.option('--default-connect/--no-default-connect', default=True, show_default=True,
              help='The default connect action to take when a client connects to the Message VPN')
@click.option('--default-publish/--no-default-publish', default=True, show_default=True,
              help='The default publish action to take when a client publishes to a topic')
@click.option('--default-subscribe/--no-default-subscribe', default=True, show_default=True,
              help='The default subscribe action to take when a client subscribes to a topic')
@click.option('--default-share/--no-default-share', default=True, show_default=True,
              help='The default connect action to take when a client subscribes to a share-name')
@my_global_options
def create(name, default_connect, default_publish, default_subscribe, default_share, **kwargs):
    '''Create a new ACL Profile'''
    dict = {
        'aclProfileName': name,
        'clientConnectDefaultAction': 'allow' if default_connect else 'disallow',
        'publishTopicDefaultAction': 'allow' if default_publish else 'disallow',
        'subscribeTopicDefaultAction': 'allow' if default_subscribe else 'disallow',
        'subscribeShareNameDefaultAction': 'allow' if default_share else 'disallow',
    }
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.post(suburl, dict)
    send_response(res)


@aclprofile.command()
@click.argument("name")
@my_global_options
@click.option('--default-connect/--no-default-connect', default=None,
              help='The default connect action to take when a client connects to the Message VPN')
@click.option('--default-publish/--no-default-publish', default=None,
              help='The default publish action to take when a client publishes to a topic')
@click.option('--default-subscribe/--no-default-subscribe', default=None,
              help='The default subscribe action to take when a client subscribes to a topic')
@click.option('--default-share/--no-default-share', default=None,
              help='The default connect action to take when a client subscribes to a share-name')
def update(name, default_connect, default_publish, default_subscribe, default_share, **kwargs):
    '''Update an existing ACL Profile'''
    dict = {}
    add_if(dict, default_connect, 'clientConnectDefaultAction', 'allow', 'disallow')
    add_if(dict, default_publish, 'publishTopicDefaultAction', 'allow', 'disallow')
    add_if(dict, default_subscribe, 'subscribeTopicDefaultAction', 'allow', 'disallow')
    add_if(dict, default_share, 'subscribeShareNameDefaultAction', 'allow', 'disallow')
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.patch(suburl, name, dict)
    send_response(res)

@aclprofile.command()
@click.argument("name")
@my_global_options
def show( name, **kwargs):
    '''Show the details of an existing ACL Profile'''
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.get(suburl, name)
    send_response(res)


@aclprofile.command()
@my_global_options
def list(**kwargs):
    '''List all the ACL Profiles in the Message VPN'''
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.get(suburl)
    send_response(res)

@aclprofile.command()
@click.argument("name")
@my_global_options
def remove(name, **kwargs):
    '''Remove an ACL Profile'''
    logger.debug(f"remove {name}")
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.delete(suburl, name)


import logging
import click

from common import add_if
from common import send_response
from common import my_global_options
from managers import RestMgr

suburl = 'clientUsernames'
logger = logging.getLogger(__name__)


@click.group()
def clientuser():
    pass


@clientuser.command()
@click.argument("name")
@click.option('--acl-profile', default='default', show_default=True,
              help='ACL Profile of the Client Username')
@click.option('--client-profile', default='default', show_default=True,
              help='Client Profile of the Client Username')
@click.option('--enable/--no-enable', default=True, show_default=True,
              help='When disabled, all clients currently connected as the Client Username are disconnected')
@click.option('--gm-perm-override/--no-gm-perm-override', default=False, show_default=True,
              help='Manage guaranteed endpoint permission override for the Client Username. When enabled all guaranteed endpoints may be accessed, modified or deleted with the same permission as the owner')
@click.option('--password',
              help='Password for the Client Username')
@click.option('--subscription-manager/--no-subscription-manager', default=False, show_default=True,
              help='Manage the subscription management capability of the Client Username. This is the ability to manage subscriptions on behalf of other Client Usernames.')
@my_global_options
def create(
        name,
        acl_profile, client_profile, enable, gm_perm_override, password, subscription_manager,
        **kwargs):
    '''Create a new client username'''
    upsert(True, name,
           acl_profile, client_profile, enable, gm_perm_override, password, subscription_manager,
           **kwargs)


def upsert(is_post, name,
           acl_profile, client_profile, enable, gm_perm_override, password, subscription_manager,
           **kwargs):
    dict = {}

    add_if(dict, acl_profile, 'clientUsername', name)
    add_if(dict, acl_profile, 'aclProfileName', acl_profile)
    add_if(dict, client_profile, 'clientProfileName', client_profile)
    add_if(dict, enable, 'enabled')
    add_if(dict, gm_perm_override, 'guaranteedEndpointPermissionOverrideEnabled')
    add_if(dict, password, 'password', password)
    add_if(dict, subscription_manager, 'subscriptionManagerEnabled')

    rest_mgr = RestMgr(kwargs)
    if is_post:
        res = rest_mgr.post('clientUsernames', dict)
    else:
        res = rest_mgr.patch('clientUsernames', name, dict)
    send_response(res)


@clientuser.command()
@click.argument("name")
@click.option('--acl-profile',
              help='ACL Profile of the Client Username')
@click.option('--client-profile',
              help='Client Profile of the Client Username')
@click.option('--enable/--no-enable', default=None,
              help='When disabled, all clients currently connected as the Client Username are disconnected')
@click.option('--gm-perm-override/--no-gm-perm-override', default=None,
              help='Manage guaranteed endpoint permission override for the Client Username. When enabled all guaranteed endpoints may be accessed, modified or deleted with the same permission as the owner')
@click.option('--password',
              help='Password for the Client Username')
@click.option('--subscription-manager/--no-subscription-manager', default=None,
              help='Manage the subscription management capability of the Client Username. This is the ability to manage subscriptions on behalf of other Client Usernames.')
@my_global_options
def update(
        name,
        acl_profile, client_profile, enable, gm_perm_override, password, subscription_manager,
        **kwargs):
    '''Update an existing client username'''
    upsert(False, name,
           acl_profile, client_profile, enable, gm_perm_override, password, subscription_manager,
           **kwargs)


@clientuser.command()
@click.argument("name")
@my_global_options
def show(name, **kwargs):
    '''Show details of an existing client username'''
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.get(suburl, name)
    send_response(res)


@clientuser.command()
@my_global_options
def list(**kwargs):
    '''List all client usernames in the Message VPN'''
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.get(suburl)
    send_response(res)


@clientuser.command()
@click.argument("name")
@my_global_options
def remove(name, **kwargs):
    '''Remove a client username'''
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.delete(suburl, name)
    send_response(res)

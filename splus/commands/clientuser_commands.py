import logging
import click

from common import *
from managers import RestMgr

logger = logging.getLogger(__name__)


@click.group()
def clientuser():
    pass

@clientuser.command(name='create')
@click.argument("name")
@my_global_options
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
def clientuser_create(
                        name,
                        acl_profile, client_profile, enable, gm_perm_override, password, subscription_manager,
                        **kwargs):
    clientuser_upsert(True, name,
                      acl_profile, client_profile, enable, gm_perm_override, password, subscription_manager,
                      **kwargs)


def clientuser_upsert(is_post, name,
                      acl_profile, client_profile, enable, gm_perm_override, password, subscription_manager,
                      **kwargs):
    try:
        logging.debug('start')

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
            rest_mgr.post('clientUsernames', dict)
        else:
            rest_mgr.patch('clientUsernames', name, dict)
    except Exception as ex:
        logger.error(f"create Exception: {ex}")



@clientuser.command(name='update')
@click.argument("name")
@my_global_options
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
def clientuser_update(
        name,
        acl_profile, client_profile, enable, gm_perm_override, password, subscription_manager,
        **kwargs):
    clientuser_upsert(False, name,
                      acl_profile, client_profile, enable, gm_perm_override, password, subscription_manager,
                      **kwargs)



@clientuser.command(name='show')
@click.argument("name")
@my_global_options
def clientuser_show( name, **kwargs):
    try:
        rest_mgr = RestMgr(kwargs)
        rest_mgr.get('clientUsernames', name)
    except Exception as ex:
        logger.error(f"{ex}")


@clientuser.command(name='list')
@click.pass_context
@my_global_options
def clientuser_list(ctx, **kwargs):
    try:
        rest_mgr = RestMgr(kwargs)
        rest_mgr.get('clientUsernames')
    except Exception as ex:
        logger.error(f"{ex}")

@clientuser.command(name='remove')
@click.argument("name")
@my_global_options
def clientuser_remove(name, **kwargs):
    try:
        logger.debug(f"remove {name}")
        rest_mgr = RestMgr(kwargs)
        rest_mgr.delete('clientUsernames', name)
    except Exception as ex:
        logger.error(f"{ex}")


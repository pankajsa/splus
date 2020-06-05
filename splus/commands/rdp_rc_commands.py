import logging
import click

from splus.common import *
from splus.managers import RestMgr

logger = logging.getLogger(__name__)

suburl1 = 'restDeliveryPoints'
suburl = 'restConsumers'


@click.group(name='rc')
def rdp_rc():
    pass


@rdp_rc.command()
@click.argument("name")
@click.option('--rdp', required=True,
              help='Name of the REST Delivery Point (RDP)')
@click.option('--username',
              help='Username for the remote host')
@click.option('--password',
              help='Password for the remote host')
@click.option('--auth-scheme', type=click.Choice(['none', 'basic', 'client-cert']),
              help='Authentication scheme to login to the remote host')
@click.option('--enable/--no-enable', default=True, show_default=True,
              help='Manage the REST Consumer. When disabled, no connections are initiated or messages delivered to this particular REST Consumer')
@click.option('--interface',
              help='The interface that will be used for all outgoing connections associated with the REST Consumer. When unspecified, an interface is automatically chosen.')
@click.option('--timeout',
              help='The maximum amount of time, in seconds, to wait for an HTTP POST response from the REST Consumer')
@click.option('--pool-size', type=int,
              help='Number of concurrent open requests to remote host')
@click.option('--host',
              help='IP address or DNS name of the remote host')
@click.option('--port', default=8080,
              help='Port number of the remote host')
@click.option('--retry-delay', default=3,
              help='The number of seconds that must pass before retrying the remote REST Consumer connection')
@click.option('--tls-cipher-suite',
              help='Colon-separated list of cipher suites the REST Consumer uses in its encrypted connection')
@click.option('--enable-tls/--no-enable-tls',
              help='Enable or disable encryption (TLS) to the remote host')
@my_global_options
def create(
        name,
        password, username, auth_scheme,
        enable, interface, timeout, pool_size, host, port,
        retry_delay, tls_cipher_suite, enable_tls,
        rdp,
        **kwargs):
    upsert(True, name,
           password, username, auth_scheme,
           enable, interface, timeout, pool_size, host, port,
           retry_delay, tls_cipher_suite, enable_tls,
           rdp,
           **kwargs)


def upsert(is_post, name,
           password, username, auth_scheme,
           enable, interface, timeout, pool_size, host, port,
           retry_delay, tls_cipher_suite, enable_tls,
           rdp,
           **kwargs):
    try:
        logging.debug('start')

        dict = {}

        add_if(dict, password, 'authenticationHttpBasicPassword', password)
        add_if(dict, username, 'authenticationHttpBasicUsername', username)
        add_if(dict, auth_scheme, 'authenticationScheme', auth_scheme)

        add_if(dict, enable, 'enabled')
        add_if(dict, interface, 'localInterface', interface)
        add_if(dict, timeout, 'maxPostWaitTime', timeout)
        add_if(dict, pool_size, 'outgoingConnectionCount', pool_size)
        add_if(dict, host, 'remoteHost', host)
        add_if(dict, port, 'remotePort', port)

        add_if(dict, name, 'restConsumerName', name)
        add_if(dict, rdp, 'restDeliveryPointName', rdp)

        add_if(dict, retry_delay, 'retryDelay', retry_delay)
        add_if(dict, tls_cipher_suite, 'tlsCipherSuiteList', tls_cipher_suite)
        add_if(dict, enable_tls, 'tlsEnabled')

        rest_mgr = RestMgr(kwargs)
        if is_post:
            rest_mgr.post(f'{suburl1}/{rdp}/{suburl}', dict)
        else:
            rest_mgr.patch(f'{suburl1}/{rdp}/{suburl}', name, dict)
    except Exception as ex:
        logger.error(f"upsert Exception: {ex}")


@rdp_rc.command()
@click.argument("name")
@click.option('--rdp', required=True,
              help='Name of the REST Delivery Point (RDP)')
@click.option('--username',
              help='Username for the remote host')
@click.option('--password',
              help='Password for the remote host')
@click.option('--auth-scheme', type=click.Choice(['none', 'basic', 'client-cert']),
              help='Authentication scheme to login to the remote host')
@click.option('--enable/--no-enable', default=None,
              help='Manage the REST Consumer. When disabled, no connections are initiated or messages delivered to this particular REST Consumer')
@click.option('--interface',
              help='The interface that will be used for all outgoing connections associated with the REST Consumer. When unspecified, an interface is automatically chosen.')
@click.option('--timeout',
              help='The maximum amount of time, in seconds, to wait for an HTTP POST response from the REST Consumer')
@click.option('--pool-size', type=int,
              help='Number of concurrent open requests to remote host')
@click.option('--host',
              help='IP address or DNS name of the remote host')
@click.option('--port', type=int,
              help='Port number of the remote host')
@click.option('--retry-delay', type=int,
              help='The number of seconds that must pass before retrying the remote REST Consumer connection')
@click.option('--tls-cipher-suite',
              help='Colon-separated list of cipher suites the REST Consumer uses in its encrypted connection')
@click.option('--enable-tls/--no-enable-tls', default=None,
              help='Enable or disable encryption (TLS) to the remote host')
@my_global_options
def update(name,
           password, username, auth_scheme,
           enable, interface, timeout, pool_size, host, port,
           retry_delay, tls_cipher_suite, enable_tls,
           rdp,
           **kwargs):
    upsert(False, name,
           password, username, auth_scheme,
           enable, interface, timeout, pool_size, host, port,
           retry_delay, tls_cipher_suite, enable_tls,
           rdp,
           **kwargs)


@rdp_rc.command()
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


@rdp_rc.command()
@my_global_options
@click.option('--rdp', required=True,
              help='Name of the REST Delivery Point (RDP)')
def list(rdp, **kwargs):
    try:
        rest_mgr = RestMgr(kwargs)
        rest_mgr.get(f'{suburl1}/{rdp}/{suburl}')
    except Exception as ex:
        logger.error(f"{ex}")


@rdp_rc.command()
@click.argument("name")
@my_global_options
def remove(name, **kwargs):
    try:
        logger.debug(f"remove {name}")
        rest_mgr = RestMgr(kwargs)
        rest_mgr.delete(suburl, name)
    except Exception as ex:
        logger.error(f"{ex}")

import click
import logging
import configparser
import os


from SolaceMgr import SolaceMgr


logger = logging.getLogger(__name__)


_global_options = [
    click.option('--default-vpn', help='Name of the MsgVPN (default from config file)', required=False),
    click.option('--broker-url', help='MsgVPN URL (default from config file'),
    click.option('--broker-username', help='Admin username (default from config file)'),
    click.option('--broker-password', help='Admin password (default from config file)'),
    #
    # click.option('--verbose', '-v', count=True, help='Verbose output'),
]


def my_global_options(func):
    for option in reversed(_global_options):
        func = option(func)
    return func


def getSolaceMgr(ctx, kwargs):
    # logger.debug('GetDefaults - Start')
    # logger.debug(f"KWARGS {kwargs}")

    config = configparser.ConfigParser()
    ctx.ensure_object(dict)
    obj = ctx.obj
    # logging.debug(obj)
    try:
        config.read(os.path.expanduser('~/.splus.cfg'))
        obj['default-vpn'] = config['GLOBAL'].get('default-vpn', '')
        obj['broker-url'] = config['GLOBAL'].get('broker-url', '')
        obj['broker-username'] = config['GLOBAL'].get('broker-username', '')
        obj['broker-password'] = config['GLOBAL'].get('broker-password', '')

    except Exception as err:
        logger.debug(f'Cannot load defaults  {err}')

    if kwargs['default_vpn'] != None:
        obj['default-vpn'] = kwargs['default-vpn']
    if kwargs['broker_url'] != None:
        obj['broker-url'] = kwargs['broker_url']
    if kwargs['broker_username'] != None:
        obj['broker-username'] = kwargs['broker_username']
    if kwargs['broker_password'] != None:
        obj['broker-password'] = kwargs['broker_password']

    logging.debug(obj)
    # global sm
    sm = SolaceMgr(username=obj['broker-username'], password=obj['broker-password'], url=obj['broker-url'], msgvpn=obj['default-vpn'])
    # logger.debug('GetDefaults - End')
    return sm
    pass

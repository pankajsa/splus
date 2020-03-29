import click
import logging
import configparser
import os

from requests.auth import HTTPBasicAuth

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


class GlobalConfig:
    '''This is GlobalConfig'''
    __instance = None
    logger = logging.getLogger(__name__)
    initDict = {}

    def __init__(self, username, password, url, msgvpn):
        if GlobalConfig.__instance != None:
            raise Exception('This is Singleton class')
        else:
            GlobalConfig.__instance = self

        self.logger.debug(f"SolaceMgr init {username} {password} {url}")
        self.username = username
        self.password = password
        self.url = url + "/SEMP/v2/config/"
        self.msgvpn = msgvpn
        self.auth = HTTPBasicAuth(username, password)
        self.initConfig()

    @staticmethod
    def getInstance():
        if GlobalConfig.__instance == None:
            GlobalConfig()
        return GlobalConfig.__instance

    def initConfig(self):
        config = configparser.ConfigParser()
        try:
            config.read(os.path.expanduser('~/.splus.cfg'))
            self.initDict['default-vpn'] = config['GLOBAL'].get('default-vpn', '')
            self.initDict['broker-url'] = config['GLOBAL'].get('broker-url', '')
            self.initDict['broker-username'] = config['GLOBAL'].get('broker-username', '')
            self.initDict['broker-password'] = config['GLOBAL'].get('broker-password', '')
        except Exception as err:
            logger.debug(f'Cannot load defaults  {err}')

    def requestHeaders(self):
        return {'Content-Type': 'application/json'}


def getRestMgr(kwargs):
    config = configparser.ConfigParser()
    dict = {}
    # logging.debug(obj)
    try:
        config.read(os.path.expanduser('~/.splus.cfg'))
        dict['default-vpn'] = config['GLOBAL'].get('default-vpn', '')
        dict['broker-url'] = config['GLOBAL'].get('broker-url', '')
        dict['broker-username'] = config['GLOBAL'].get('broker-username', '')
        dict['broker-password'] = config['GLOBAL'].get('broker-password', '')

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
    sm = RestMgr(username=obj['broker-username'], password=obj['broker-password'], url=obj['broker-url'], msgvpn=obj['default-vpn'])
    return sm


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
    sm = SolaceMgr(username=obj['broker-username'], password=obj['broker-password'], url=obj['broker-url'], msgvpn=obj['default-vpn'])
    return sm

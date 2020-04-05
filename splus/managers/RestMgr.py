import configparser
import json
import logging
import os

import requests
from requests.auth import HTTPBasicAuth


class RestMgr:
    logger = logging.getLogger(__name__)

    requestHeaders = {
        'Content-Type': 'application/json'
    }

    def __init__(self, kwargs):
        # self.logger.debug(kwargs)
        default_vpn = broker_url = broker_username = broker_password = None
        try:
            config = configparser.ConfigParser()
            # logging.debug(kwargs)
            config.read(os.path.expanduser('~/.splus.cfg'))
            default_vpn = config['GLOBAL'].get('default-vpn', '')
            broker_url = config['GLOBAL'].get('broker-url', '')
            broker_username = config['GLOBAL'].get('broker-username', '')
            broker_password = config['GLOBAL'].get('broker-password', '')
        except Exception as err:
            self.logger.warning(f'Cannot load defaults from ~/.splus.cfg:  {err}')
        finally:
            if 'default_vpn' in kwargs and kwargs['default_vpn'] is not None:
                default_vpn = kwargs['default_vpn']
            if kwargs['broker_url'] is not None:
                broker_url = kwargs['broker_url']
            if kwargs['broker_username'] is not None:
                broker_username = kwargs['broker_username']
            if kwargs['broker_password'] is not None:
                broker_password = kwargs['broker_password']

            # self.logger.debug(f'default_vpn={default_vpn}')
            # self.logger.debug(f'broker_url={broker_url}')
            # self.logger.debug(f'broker_username={broker_username}')
            # self.logger.debug(f'broker_password={broker_password}')

            if broker_url is not None and broker_username is not None and broker_password is not None:
                self.baseurl = broker_url + '/SEMP/v2/config/'
                self.default_vpn = default_vpn
                self.auth = HTTPBasicAuth(broker_username, broker_password)
            else:
                exit(2)

    def post(self, suburl, dict, default_vpn=True):
        try:
            # self.logger.info(f"post {self.baseurl}  {suburl} {dict}")
            data = json.dumps(dict)
            if default_vpn:
                new_baseurl = f'{self.baseurl}msgVpns/{self.default_vpn}/'
            else:
                new_baseurl = self.baseurl

            res = requests.post(new_baseurl + suburl,
                                data=data,
                                headers=self.requestHeaders,
                                auth=self.auth)
            obj = {}
            obj['code'] = 0 if res.status_code == 200 else 1
            obj['content'] = json.loads(res.content) if res.status_code != 200 else {}
            return obj
        except Exception as ex:
            obj = {}
            obj['code'] = 3
            obj['error'] = f"{ex}"
            return obj

    def delete(self, suburl, name, default_vpn=True):
        try:
            # self.logger.info(f"delete {self.baseurl}{suburl}/{name}")
            if default_vpn:
                new_baseurl = f'{self.baseurl}msgVpns/{self.default_vpn}/'
            else:
                new_baseurl = self.baseurl

            res = requests.delete(f'{new_baseurl}{suburl}/{name}',
                                  headers=self.requestHeaders,
                                  auth=self.auth)
            obj = {}
            obj['code'] = 0 if res.status_code == 200 else 1
            obj['content'] = json.loads(res.content) if res.status_code != 200 else {}
            return obj
        except Exception as ex:
            obj = {}
            obj['code'] = 3
            obj['error'] = f"{ex}"
            return obj

    def get(self, suburl, name=None, default_vpn=True):
        try:

            # self.logger.info(f"delete {self.baseurl}{suburl}")
            if default_vpn:
                new_baseurl = f'{self.baseurl}msgVpns/{self.default_vpn}/'
            else:
                new_baseurl = self.baseurl

            if name is not None:
                suburl += '/' + name

            res = requests.get(f'{new_baseurl}{suburl}',
                               headers=self.requestHeaders,
                               auth=self.auth)
            obj = {}
            obj['code'] = 0 if res.status_code == 200 else 1
            obj['content'] = json.loads(res.content)
            return obj
        except Exception as ex:
            obj = {}
            obj['code'] = 3
            obj['error'] = f"{ex}"
            return obj

    def patch(self, suburl, name, dict, default_vpn=True):
        try:
            # self.logger.info(f"post {self.baseurl}  {suburl} {dict}")
            data = json.dumps(dict)
            if default_vpn:
                new_baseurl = f'{self.baseurl}msgVpns/{self.default_vpn}/'
            else:
                new_baseurl = self.baseurl

            res = requests.patch(new_baseurl + suburl + '/' + name,
                                 data=data,
                                 headers=self.requestHeaders,
                                 auth=self.auth)
            obj = {}
            obj['code'] = 0 if res.status_code == 200 else 1
            obj['content'] = json.loads(res.content) if res.status_code != 200 else {}
            return obj
        except Exception as ex:
            obj = {}
            obj['code'] = 3
            obj['error'] = f"{ex}"
            return obj

import logging
import requests
import json
from requests.auth import HTTPBasicAuth

class Vpn:
    '''This is SolaceMgr'''

    logger = logging.getLogger(__name__)
    def __init__(self, sm):
        # self.logger.debug(f"SolaceMgr init {username} {password} {url}")
        self.sm = sm
        print('VPN Init')
        self.logger.info('VPN Init')


    def getAllVpn(self):
        print('getAllVpn')
        # res = requests.get(self.sm.url + f"msgVpns?where=msgVpnName=={name}&select=msgVpnName", auth=self.sm.auth)
        res = requests.get(self.sm.url + f"msgVpns", auth=self.sm.auth)
        # print(res.content)
        # self.logger.debug(res.content)
        self.logger.debug(res.status_code)


    def getVpn(self, name):
        self.logger.debug(f"getVpn {name} {self.url} ")
        self.logger.debug(self.url + f"msgVpns/{name}")
        res = requests.get(self.url + f"msgVpns/{name}", auth=self.auth)
        self.logger.debug(res.content)
        self.logger.debug(res.status_code)



    def createVpn(self, name, dict):
        try:
            self.logger.info(f"createVpn {name}")
            defaultDict = {
                "msgVpnName": f"{name}",
                "authenticationBasicType": "none",
                "dmrEnabled": True,
                "enabled": True,
            }
            finalDict = {**defaultDict, **dict}
            data = json.dumps(finalDict)
            res = requests.post(self.sm.url + f"msgVpns?select=msgVpnName",
                                data=data,
                                headers=self.sm.requestHeaders(),
                                auth=self.sm.auth)
            # self.logger.debug(res.content)
            # self.logger.debug(res.status_code)
            returnDict = {
                "code": res.status_code,
            }
            if res.status_code != 200:
                returnDict['errorCode'] = res.content
            return returnDict
        except Exception as ex:
            self.logger.error(f"msgvpn_create - END + {ex}")


    def deleteVpn(self, name):
        try:
            self.logger.debug(f"deleteVpn {name} {self.sm.url} ")
            res = requests.delete(self.sm.url + f"msgVpns/{name}?select=msgVpnName",
                                headers=self.sm.requestHeaders(),
                                auth=self.sm.auth)
            self.logger.debug(res.content)
            self.logger.debug(res.status_code)
            returnDict = {
                "code": res.status_code,
            }
            if res.status_code != 200:
                returnDict['errorCode'] = res.content
            return returnDict
        except Exception as ex:
            self.logger.error(f"msgvpn_create - END + {ex}")


#

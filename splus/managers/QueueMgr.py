import logging
import requests
import json

class QueueMgr:
    logger = logging.getLogger(__name__)
    def __init__(self, sm):
        self.sm = sm
        print('VPN Init')
        self.logger.info('VPN Init')


    def create(self, name, dict):
        try:
            self.logger.debug(data)
            res = requests.post(self.sm.url + f"msgVpns/{self.sm.msgvpn}/queues",
                                data=data,
                                headers=self.sm.requestHeaders(),
                                auth=self.sm.auth)
            # self.logger.debug(res.content)
            # self.logger.debug(res.status_code)
            returnDict = {
                "code": res.status_code,
            }
            self.logger.debug(res.content)
            if res.status_code != 200:
                returnDict['errorCode'] = res.content
            return returnDict
        except Exception as ex:
            self.logger.error(f"msgvpn_create - END + {ex}")


    def update(self, name, dict):
        try:
            data =json.dumps(dict)
            self.logger.debug(data)
            res = requests.patch(self.sm.url + f"msgVpns/{self.sm.msgvpn}/queues/{name}",
                                data=data,
                                headers=self.sm.requestHeaders(),
                                auth=self.sm.auth)
            # self.logger.debug(res.content)
            # self.logger.debug(res.status_code)
            returnDict = {
                "code": res.status_code,
            }
            self.logger.debug(res.content)
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


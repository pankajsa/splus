import logging
import requests
import json
from requests.auth import HTTPBasicAuth

class SolaceMgr:
    '''This is SolaceMgr'''
    a=10
    logger = logging.getLogger(__name__)

    def __init__(self, username, password, url):
        self.logger.debug(f"SolaceMgr init {username} {password} {url}")
        self.username = username
        self.password = password
        self.url = url + "/SEMP/v2/config/"
        self.auth = HTTPBasicAuth(username, password)


    def getAllVpn(self, name):
        self.logger.debug(f"getAllVpn {name} {self.url} ")
        res = requests.get(self.url + f"msgVpns?where=msgVpnName=={name}&select=msgVpnName", auth=self.auth)
        self.logger.debug(res.content)
        self.logger.debug(res.status_code)


    def getVpn(self, name):
        self.logger.debug(f"getVpn {name} {self.url} ")
        self.logger.debug(self.url + f"msgVpns/{name}")
        res = requests.get(self.url + f"msgVpns/{name}", auth=self.auth)
        self.logger.debug(res.content)
        self.logger.debug(res.status_code)



    def requestHeaders(self):
        return {'Content-Type': 'application/json'}

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
#             headers = {'Content-Type': 'application/json'}
            res = requests.post(self.url + f"msgVpns?select=msgVpnName",
                                data=data,
                                headers=self.requestHeaders(),
                                auth=self.auth)
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


    def deleteVpn(self, name):
        self.logger.debug(f"deleteVpn {name} {self.url} ")
        headers = {'Content-Type': 'application/json'}
        res = requests.delete(self.url + f"msgVpns/{name}?select=msgVpnName",
                            headers=headers,
                            auth=self.auth)
        self.logger.debug(res.content)
        self.logger.debug(res.status_code)




# logging.basicConfig(format='%(asctime)s,%(msecs)d %(levelname)-8s [%(filename)s:%(lineno)d] %(message)s',
#                     datefmt='%Y-%m-%d:%H:%M:%S',
#                     level=logging.DEBUG)
#
# msgvpn="aaa3"
# sm = SolaceMgr(username="admin", password="admin", url="http://localhost:8080")
# sm.deleteVpn(msgvpn)
#
# dict = {
#     "authenticationBasicEnabled": False,
#     "dmrEnabled": False,
#     "enabled": False,
#
# }
# res = sm.createVpn(msgvpn, dict)


import logging
import requests
import json
from requests.auth import HTTPBasicAuth

class SolaceMgr:
    '''This is SolaceMgr'''
    a=10

    def __init__(self, username, password, url):

        print(f"SolaceMgr init {username} {password} {url}")
        self.username = username
        self.password = password
        self.url = url + "/SEMP/v2/config/"
        self.auth = HTTPBasicAuth(username, password)
        logger = logging.getLogger(__name__)
        logger.debug("This is a debug log")
        logger.info("This is an info log")


    def getAllVpn(self, name):
        print(f"getAllVpn {name} {self.url} ")
        res = requests.get(self.url + f"msgVpns?where=msgVpnName=={name}&select=msgVpnName", auth=self.auth)
        print(res.content)
        print(res.status_code)


    def getVpn(self, name):
        print(f"getVpn {name} {self.url} ")
        print(self.url + f"msgVpns/{name}")
        res = requests.get(self.url + f"msgVpns/{name}", auth=self.auth)
        print(res.content)
        print(res.status_code)


    def createVpn(self, name, dict):
        print(f"getVpn {name} {self.url} ")
        # abc = dict['authenticationBasicEnabled'] == False? "false":"true";
        # data = (f'{{'
        #         f'"msgVpnName":"{name}",'
        #         f'"authenticationBasicEnabled":{abc}'
        #
        #         f'}}')
        defaultDict = {
            "msgVpnName": f"{name}",
            "authenticationBasicType": "none",
            "dmrEnabled": True,
            "enabled": True,
        }
        finalDict = {**defaultDict, **dict}

        data = json.dumps(finalDict)
        print (data)
        headers = {'Content-Type': 'application/json'}
        res = requests.post(self.url + f"msgVpns?select=msgVpnName",
                            data=data,
                            headers=headers,
                            auth=self.auth)
        print(res.content)
        print(res.status_code)
        returnDict = {
            "msg"
            "status": res.status_code
        }
        return returnDict


    def deleteVpn(self, name):
        print(f"deleteVpn {name} {self.url} ")
        headers = {'Content-Type': 'application/json'}
        res = requests.delete(self.url + f"msgVpns/{name}?select=msgVpnName",
                            headers=headers,
                            auth=self.auth)
        print(res.content)
        print(res.status_code)




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


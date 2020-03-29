import logging
import requests
import json
from requests.auth import HTTPBasicAuth

class SolaceMgr:
    '''This is SolaceMgr'''
    logger = logging.getLogger(__name__)

    def __init__(self, username, password, url, msgvpn):
        self.logger.debug(f"SolaceMgr init {username} {password} {url}")
        self.username = username
        self.password = password
        self.url = url + "/SEMP/v2/config/"
        self.msgvpn = msgvpn
        self.auth = HTTPBasicAuth(username, password)



    def requestHeaders(self):
        return {'Content-Type': 'application/json'}


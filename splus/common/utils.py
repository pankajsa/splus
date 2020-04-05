import json
import logging

import click

logger = logging.getLogger(__name__)

_global_options = [
    # click.option('-v', '--verbose', count=True, help='Level of verbosity'),
    click.option('--default-vpn', help='Name of the MsgVPN (default from config file)', required=False),
    click.option('--broker-url', help='MsgVPN URL (default from config file'),
    click.option('--broker-username', help='Admin username (default from config file)'),
    click.option('--broker-password', help='Admin password (default from config file)'),
]


def my_global_options(func):
    for option in reversed(_global_options):
        func = option(func)
    return func


def add_if(dict, flag, key, true_val=True, false_val=False):
    if flag is not None:
        dict[key] = true_val if flag else false_val


def send_response(res):
    if res['code'] == 3:
        res_str = json.JSONEncoder().encode({"error": {"code": 555, "description": res['error']}})
    elif res['code'] == 0:
        res_str = json.dumps(res['content'])
    else:
        res_str = json.dumps(res['content']['meta'])
    click.echo(res_str)
    exit(res['code'])

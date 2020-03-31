import click
import logging

logger = logging.getLogger(__name__)

_global_options = [
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

#!/usr/local/bin/python3
## /usr/local/bin/python3 -m nuitka --follow-imports splus.py
import logging.config

import click
import os

from commands import *

logger = logging.getLogger(__name__)


@click.group()
@click.pass_context
def splus(ctx):
    """Solace PubSub+ SDK ...a simple command line tool to administer multiple Solace PubSub+ Event Brokers"""
    pass


@splus.command()
@click.option('--broker-url', default="http://localhost:8080", show_default=True,
              help='Management URL for the Solace PubSub+ Broker')
@click.option('--broker-username', required=True, help='Administrative username')
@click.option('--broker-password', required=True, help='Password for the username')
@click.option('--default-vpn', default='default', show_default=True,
              help='Name of the Message VPN that will be used for all subsequent commands, unless its over-ridden by "--default-vpn" in the other commands')
@click.pass_context
def config(ctx, default_vpn, broker_url, broker_username, broker_password):
    '''Configure the defaults for the SDK'''
    # logger.debug('=====>Debug is %s' % (ctx.obj['DEBUG'] and 'on' or 'off'))
    logger.debug(f"I'll handle the Config {broker_url} {broker_username} {broker_password}")
    """
    Store configuration values in a file.
    """
    config_file = os.path.expanduser('~/.splus.cfg')

    with open(config_file, 'w') as cfg:
        cfg.write(f"[GLOBAL]\n")
        cfg.write(f"default-vpn={default_vpn}\n")
        cfg.write(f"broker-url={broker_url}\n")
        cfg.write(f"broker-username={broker_username}\n")
        cfg.write(f"broker-password={broker_password}\n")


splus.add_command(msgvpn)
splus.add_command(aclprofile)
splus.add_command(clientprofile)
splus.add_command(clientuser)
splus.add_command(queue)
splus.add_command(jndi)
splus.add_command(replay)
splus.add_command(rdp)
# splus.add_command(user)
# splus.add_command(alert)
# splus.add_command(broker)
# splus.add_command(ca)
# splus.add_command(mesh)
# splus.add_command(service)

if __name__ == '__main__':
    try:
        logging.config.fileConfig(fname='conf/logging.conf', disable_existing_loggers=False)
        logger = logging.getLogger(__name__)
    except Exception as ex:
        logging.basicConfig(format='%(levelname)-8s [%(filename)s:%(lineno)d] %(message)s', level=logging.DEBUG)
        logger = logging.getLogger(__name__)
    splus()
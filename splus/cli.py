## /usr/local/bin/python3 -m nuitka --follow-imports cli.py
import logging
import logging.config

import click
import os

from commands import *

logger = logging.getLogger(__name__)


@click.group()
@click.option('--debug/--no-debug', default=True)
@click.pass_context
def cli(ctx, debug):
    """Solace PubSub+ SDK ...a simple command line tool."""
    pass


@cli.command()
@click.option('--default-vpn', default='default', show_default=True)
@click.option('--broker-url', default="http://localhost:8080", show_default=True, )
@click.option('--broker-username', required=True)
@click.option('--broker-password', required=True)
@click.pass_context
def config(ctx, default_vpn, broker_url, broker_username, broker_password):
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


cli.add_command(msgvpn)
cli.add_command(aclprofile)
cli.add_command(clientprofile)
cli.add_command(clientuser)
cli.add_command(queue)
cli.add_command(jndi)
cli.add_command(replay)
cli.add_command(rdp)
# cli.add_command(user)
# cli.add_command(alert)
# cli.add_command(broker)
# cli.add_command(ca)
# cli.add_command(mesh)
# cli.add_command(service)

if __name__ == '__main__':
    try:
        logging.config.fileConfig(fname='conf/logging.conf', disable_existing_loggers=False)
        logger = logging.getLogger(__name__)
        logger.debug('SPLUS Started')
    except Exception as ex:
        print('oops exception')
        print(ex)
        logging.basicConfig(format='%(levelname)-8s [%(filename)s:%(lineno)d] %(message)s', level=logging.DEBUG)
        logger = logging.getLogger(__name__)
        logger.debug('SPLUS Started')
    print('normal')
    # cli()

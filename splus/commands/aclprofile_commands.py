import logging
import click
# import os
# from SolaceMgr import SolaceMgr
# from Vpn import Vpn
# import configparser

# from cli import my_global_options


@click.group()
def aclprofile():
    pass


@aclprofile.command(name='create')  # @cli, not @click!
@click.pass_context
# @my_global_options
def aclprofile_create(ctx, **kwargs):
    # GetDefaults(ctx, kwargs)
    logging.debug(ctx.obj)
    logging.debug('aclprofile_create')




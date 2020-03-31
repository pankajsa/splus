import logging
import click

from common import *
from managers import RestMgr

logger = logging.getLogger(__name__)


@click.group()
def user():
    pass


@user.command(name='create')
@click.pass_context
# @my_global_options
def user_create(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('users_create')




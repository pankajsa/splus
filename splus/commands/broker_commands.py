import logging
import click

from common import *
from managers import RestMgr

logger = logging.getLogger(__name__)


@click.group()
def broker():
    pass


@broker.command(name='create')
@click.pass_context
# @my_global_options
def broker_create(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('broker_create')




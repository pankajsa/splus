import logging
import click

from common import *
from managers import RestMgr

logger = logging.getLogger(__name__)


@click.group()
def alert():
    pass


@alert.command(name='create')
@click.pass_context
# @my_global_options
def alert_create(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('alert_create')




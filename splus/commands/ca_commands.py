import logging
import click

from common import *
from managers import RestMgr

logger = logging.getLogger(__name__)


@click.group()
def ca():
    pass



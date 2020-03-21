import logging
import click

# from cli import my_global_options


@click.group()
def ca():
    pass


@ca.command(name='create')
@click.pass_context
# @my_global_options
def ca_create(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('ca_create')




import logging
import click

# from cli import my_global_options


@click.group()
def alert():
    pass


@alert.command(name='create')
@click.pass_context
# @my_global_options
def alert_create(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('alert_create')




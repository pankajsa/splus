import logging
import click

# from cli import my_global_options


@click.group()
def queue():
    pass


@queue.command(name='create')
@click.pass_context
# @my_global_options
def queue_create(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('queue_create')




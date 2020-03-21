import logging
import click

# from cli import my_global_options


@click.group()
def jndi():
    pass


@jndi.command(name='create')
@click.pass_context
# @my_global_options
def jndi_create(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('jndi_create')




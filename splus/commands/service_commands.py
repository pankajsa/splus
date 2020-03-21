import logging
import click

# from cli import my_global_options


@click.group()
def service():
    pass


@service.command(name='create')
@click.pass_context
# @my_global_options
def service_create(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('service_create')




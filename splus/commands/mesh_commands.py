import logging
import click

# from cli import my_global_options


@click.group()
def mesh():
    pass


@mesh.command(name='create')
@click.pass_context
# @my_global_options
def mesh_create(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('mesh_create')




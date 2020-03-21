import logging
import click

# from cli import my_global_options


@click.group()
def clientprofile():
    pass


@clientprofile.command(name='create')
@click.pass_context
# @my_global_options
def clientprofile_create(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('clientprofile_create')




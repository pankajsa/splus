import logging
import click
import os

from SolaceMgr import SolaceMgr



_global_test_options = [
    click.option('--msgvpn', default="default", help='Name of the MsgVPN', show_default=True),
    click.option('--url', default="http://localhost:8080", help='MsgVPN URL'),
    click.option('--username', help='username'),
    click.option('--password', help='password'),

    click.option('--verbose', '-v', count=True, help='Verbose output'),
    click.option('--fail-fast', '--failfast', '-f', 'fail_fast', is_flag=True, default=False, help='Stop on failure'),
]


def my_global_options(func):
    for option in reversed(_global_test_options):
        func = option(func)
    return func

sm = SolaceMgr(username="admin", password="admin", url="http://localhost:8080")


@click.group()
@click.option('--debug/--no-debug', default=False)
@click.option('--msgvpn', required=False)
@click.pass_context
def cli(ctx, debug, msgvpn):
    # click.echo('Debug mode is %s' % ('on' if debug else 'off'))
    # click.echo(f'msgvpn  {msgvpn}')

    ctx.ensure_object(dict)
    ctx.obj['DEBUG'] = debug
    pass


@cli.command()
@my_global_options
@click.option('--start-directory', '-s', default='test',
              help='Directory (or module path) to start discovery ("test" default)')
def test(start_directory, **kwargs):
    # Run tests here
    click.echo(f"test {start_directory}")
    print(kwargs)
    pass


@cli.command()
@click.option(
    '--format', '-f', type=click.Choice(['html', 'xml', 'text']), default='html', show_default=True,
    help='Coverage report output format',
)
@my_global_options
@click.pass_context
def cover(ctx, format, verbosity, fail_fast):
    # Setup coverage, ctx.invoke() the test command above, generate report
    pass


@cli.command()
@click.option('--msgvpn', default="default")
@click.option('--url', default="http://localhost:8080")
@click.option('--username', required=True)
@click.option('--password', required=True)
@click.pass_context
def config(ctx, msgvpn, url, username, password):
    click.echo('=====>Debug is %s' % (ctx.obj['DEBUG'] and 'on' or 'off'))
    click.echo(f"I'll handle the Config {msgvpn} {url} {username} {password}")
    """
    Store configuration values in a file.
    """
    config_file = os.path.expanduser('~/.splus.cfg')

    with open(config_file, 'w') as cfg:
        cfg.write(f"msgvpn={msgvpn}\n")
        cfg.write(f"url={url}\n")
        cfg.write(f"username={username}\n")
        cfg.write(f"password={password}\n")


@cli.group()  # @cli, not @click!
@my_global_options
def msgvpn(verbose, msgvpn, **kwargs):
    pass

@msgvpn.command(name='create')
@my_global_options
@click.option('--basicauth',is_flag=True,  default=False)
@click.option('--dmr/--no-dmr', default=False, show_default=True)
@click.option('--enable/--disable', default=False, show_default=True)
@click.argument("msgvpn")
def msgvpn_create(msgvpn, basicauth, **kwargs):
    click.echo('msgvpn_create')
    click.echo(f'msgvpn {msgvpn} basicauth {basicauth}')
    print(kwargs)
    dict = {
        "authenticationBasicEnabled": True if 'basicauth' in kwargs else False,
        "dmrEnabled": kwargs['dmr'],
        "enabled": kwargs['enable'],
    }
    res = sm.createVpn(msgvpn, dict)
    print(res)



@msgvpn.command(name='delete')
@click.argument("msgvpn")
@my_global_options
def msgvpn_delete(msgvpn,**kwargs):
    click.echo('msgvpn_delete')
    print(kwargs)
    res = sm.deleteVpn(msgvpn)
    print(res)




@cli.group()  # @cli, not @click!
@my_global_options
def aclprofile(verbose, msgvpn, **kwargs):
    # click.echo(f'aclprofile  {msgvpn}  ')
    # click.echo('Verbosity: %s' % verbose)
    # print(kwargs)
    pass


@aclprofile.command(name='create')  # @cli, not @click!
@my_global_options
@click.option('--vpn2', default="abc")
def aclprofile_create(basicauth, **kwargs):
    click.echo('aclprofile_create')
    click.echo(f'basicauth {basicauth}')
    print(kwargs)


if __name__ == '__main__':
    logging.basicConfig(format='%(levelname)-8s [%(filename)s:%(lineno)d] %(message)s',
                        datefmt='%Y-%m-%d:%H:%M:%S',
                        level=logging.DEBUG)
    logger = logging.getLogger(__name__)
    # logger.debug("This is a debug log")
    # sm = SolaceMgr(username="admin", password="admin", url="http://localhost:8080")
    # sm.deleteVpn("aaa3")
    # sm.getVpn("aaa3")
    # sm.createVpn("aaa3")
    cli()


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


def initSetup(debug):
    logging.basicConfig(format='%(levelname)-8s [%(filename)s:%(lineno)d] %(message)s',
                        datefmt='%Y-%m-%d:%H:%M:%S',
                        level=(logging.DEBUG if debug else logging.INFO) ,
                        )
    global logger
    logger = logging.getLogger(__name__)


@click.group()
@click.option('--debug/--no-debug', default=True)
@click.option('--msgvpn', required=False)
@click.pass_context
def cli(ctx, debug, msgvpn):
    # logger.debug('Debug mode is %s' % ('on' if debug else 'off'))
    initSetup(debug)
    logger.info(f"Debug Mode {debug}")

    global sm
    sm = SolaceMgr(username="admin", password="admin", url="http://localhost:8080")

    logger.debug(f'msgvpn  {msgvpn}')

    ctx.ensure_object(dict)
    ctx.obj['DEBUG'] = debug
    pass


@cli.command()
@my_global_options
@click.option('--start-directory', '-s', default='test',
              help='Directory (or module path) to start discovery ("test" default)')
def test(start_directory, **kwargs):
    # Run tests here
    logger.debug(f"test {start_directory}")
    debug.log(kwargs)
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
    logger.debug('=====>Debug is %s' % (ctx.obj['DEBUG'] and 'on' or 'off'))
    logger.debug(f"I'll handle the Config {msgvpn} {url} {username} {password}")
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
    try:
        logger.debug("msgvpn_create - START")
        logger.debug(kwargs)
        dict = {
            "authenticationBasicEnabled": True if 'basicauth' in kwargs else False,
            "dmrEnabled": kwargs['dmr'],
            "enabled": kwargs['enable'],
        }
        res = sm.createVpn(msgvpn, dict)
        logger.debug(res)
        logger.debug("msgvpn_create - END")
    except Exception as ex:
        logger.error(f"msgvpn_create - END + {ex}")

@msgvpn.command(name='delete')
@click.argument("msgvpn")
@my_global_options
def msgvpn_delete(msgvpn,**kwargs):
    logger.debug('msgvpn_delete')
    debug.log(kwargs)
    res = sm.deleteVpn(msgvpn)
    debug.log(res)




@cli.group()  # @cli, not @click!
@my_global_options
def aclprofile(verbose, msgvpn, **kwargs):
    # logger.debug(f'aclprofile  {msgvpn}  ')
    # logger.debug('Verbosity: %s' % verbose)
    # debug.log(kwargs)
    pass


@aclprofile.command(name='create')  # @cli, not @click!
@my_global_options
@click.option('--vpn2', default="abc")
def aclprofile_create(basicauth, **kwargs):
    logger.debug('aclprofile_create')
    logger.debug(f'basicauth {basicauth}')
    debug.log(kwargs)


if __name__ == '__main__':
    cli()


import click


_global_options = [
    click.option('--default-vpn', help='Name of the MsgVPN', required=False),
    click.option('--broker-url', help='MsgVPN URL'),
    click.option('--broker-username', help='username'),
    click.option('--broker-password', help='password'),
    #
    # click.option('--verbose', '-v', count=True, help='Verbose output'),
]


def my_global_options(func):
    for option in reversed(_global_options):
        func = option(func)
    return func


from click.testing import CliRunner
from splus import splus

runner = CliRunner()

def test_splus():
    result = runner.invoke(splus)
    print(result.output)
    assert result.exit_code == 0

def test_msgvpn():
    result = runner.invoke(splus, ['msgvpn'])
    print(result.output)
    print(f'exit code: {result.exit_code}')

    assert result.exit_code == 0
    print('test_msgvpn OK')

def test_msgvpn_list():
    result = runner.invoke(splus, ['msgvpn', 'list'])
    # print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_msgvpn_list OK')


def test_msgvpn_create():
    result = runner.invoke(splus, ['msgvpn', 'create', 'vpn1'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_msgvpn_create OK')

def test_msgvpn_update():
    result = runner.invoke(splus, ['msgvpn', 'update', 'vpn1', '--dmr', '--enable'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_msgvpn_update OK')

def test_msgvpn_remove():
    result = runner.invoke(splus, ['msgvpn', 'remove', 'vpn1'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_msgvpn_remove OK')


# test_splus()
# test_msgvpn()
# test_msgvpn_list()
# test_msgvpn_create()
# test_msgvpn_update()
test_msgvpn_remove()
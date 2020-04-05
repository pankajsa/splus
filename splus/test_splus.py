from click.testing import CliRunner
from splus import splus

runner = CliRunner()

def test_splus():
    result = runner.invoke(splus)
    # print(result.output)
    assert result.exit_code == 0
    print('test_splus OK')

def test_msgvpn():
    result = runner.invoke(splus, ['msgvpn'])
    # print(result.output)
    # print(f'exit code: {result.exit_code}')
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

def test_msgvpn_show():
    result = runner.invoke(splus, ['msgvpn', 'show', 'vpn1'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_msgvpn_show OK')


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


def test_queue_list():
    result = runner.invoke(splus, ['queue', 'list'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_queue_list OK')


def test_queue_create():
    result = runner.invoke(splus, ['queue', 'create', 'q1'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_queue_create OK')

def test_queue_show():
    result = runner.invoke(splus, ['queue', 'show', 'q1'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_queue_show OK')


def test_queue_update():
    result = runner.invoke(splus, ['queue', 'update', 'q1', '--no-egress', '--exclusive'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_queue_update OK')

def test_queue_remove():
    result = runner.invoke(splus, ['queue', 'remove', 'q1'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_queue_remove OK')

def test_queue_remove_fail():
    result = runner.invoke(splus, ['queue', 'remove', 'q1'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 1
    print('test_queue_remove_fail OK')


def test_clientprofile_list():
    result = runner.invoke(splus, ['clientprofile', 'list'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_clientprofile_list OK')


def test_clientprofile_create():
    result = runner.invoke(splus, ['clientprofile', 'create', 'cp1'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_clientprofile_create OK')

def test_clientprofile_show():
    result = runner.invoke(splus, ['clientprofile', 'show', 'cp1'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_clientprofile_show OK')


def test_clientprofile_update():
    result = runner.invoke(splus, ['clientprofile', 'update', 'cp1', '--no-enable-tx'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_clientprofile_update OK')

def test_clientprofile_remove():
    result = runner.invoke(splus, ['clientprofile', 'remove', 'cp1'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 0
    print('test_clientprofile_remove OK')

def test_clientprofile_remove_fail():
    result = runner.invoke(splus, ['clientprofile', 'remove', 'cp1'])
    print(f'code: {result.exit_code}, {result.output}')
    assert result.exit_code == 1
    print('test_clientprofile_remove_fail OK')


# test_splus()
# test_msgvpn()
# test_msgvpn_list()
# test_msgvpn_create()
# test_msgvpn_update()
# test_msgvpn_show()
# test_msgvpn_remove()

# test_queue_list()
# test_queue_create()
# test_queue_update()
# test_queue_show()
# test_queue_remove()
# test_queue_remove_fail()

# test_clientprofile_list()
# test_clientprofile_create()
test_clientprofile_update()
# test_clientprofile_show()
# test_clientprofile_remove()
# test_clientprofile_remove_fail()

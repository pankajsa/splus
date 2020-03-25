import logging
import click

from common import *
from managers import JndiMgr

logger = logging.getLogger(__name__)

@click.group()
def jndi():
    pass


@jndi.group()
def cf():
    pass


@cf.command(name='create')
@my_global_options
@click.pass_context
@click.argument("name")
@click.option('--enable-dup-clientid/--no-enable-dup-clientid', default=False, show_default=True,
              help='Enable whether new JMS connections can use the same Client identifier (ID) as an existing connection')
@click.option('--description', default='',
              help='Client description')
@click.option('--client-id', default='',
              help='Client Id')
@click.option('--enable-dynamic-durable/--no-enable-dynamic-durable', default=False, show_default=True,
              help='Enable whether a durable endpoint will be dynamically created on the broker when the client calls Session.createDurableSubscriber() or Session.createQueue()')
@click.option('--enable-dynamic-ttl/--no-enable-dynamic-ttl', default=True, show_default=True,
              help='Control if dynamically created endpoints respect the message time-to-live (TTL) property')
@click.option('--receive-ack-timeout', default=1000, show_default=True,
              help='Timeout, in milliseconds, for sending the ACK for guaranteed messages received by the Subscriber')
@click.option('--receive-reconnect-count', default=-1, show_default=True,
              help='Maximum number of attempts to reconnect to the host(s) after the guaranteed messaging connection has been lost. "-1" means to retry forever. ')
@click.option('--receive-reconnect-wait', default=3000, show_default=True,
              help='Amount of time, in milliseconds, to wait before making another attempt to connect after the guaranteed messaging connection has been lost')
@click.option('--receive-window', default=18, show_default=True,
              help='Window size for guaranteed messages received by the Subscriber')
@click.option('--receive-window-threshold', default=60, show_default=True,
              help='Threshold for sending the ACK  received by the Subscriber as a percentage of receive-window')
@click.option('--send-ack-timeout', default=2000, show_default=True,
              help='Timeout, in milliseconds, for receiving the ACK for messages sent by the Publisher')
@click.option('--send-window', default=255, show_default=True,
              help='Window size for non-persistent messages sent by the Publisher. For persistent messages the window size is fixed at 1.')
@click.option('--persistent/--no-persistent', default=False, show_default='True',
              help='Default delivery mode for messages sent by the Publisher')
@click.option('--dmq-eligible/--no-dmq-eligible', default=False, show_default='True',
              help='Control if messages sent by the Publisher are DMQ eligible by default')
@click.option('--eliding-eligible/--no-eliding-eligible', default=False, show_default='True',
              help='Control if messages sent by the Publisher are Eliding eligible by default')
@click.option('--enable-jmx-userid/--no-enable-jmx-userid', default=False, show_default='True',
              help='Inclusion (adding or replacing) of the JMSXUserID property in messages sent by the Publisher ')
@click.option('--text-as-binary/--no-text-as-binary', default=True, show_default='True',
              help='Encode JMS Text Messages as binary attachment')
@click.option('--compression-level', default=-1, show_default='True',
              help='Compression level for the connection to the broker. 0 means no compression, and -1 means the compression level is specified in the JNDI Properties file.')
@click.option('--connect-retry-count', default=0, show_default='True',
              help='Maximum number of retry attempts to establish an initial connection to the host(s). 0 means no retries, and -1 means to retry forever.')
@click.option('--connect-retry-per-host-count', default=0, show_default='True',
              help='Maximum number of retry attempts to establish an initial connection to each host in the list of hosts. 0 means no retries, and -1 means to retry forever.')
@click.option('--connect-retry-count', default=0, show_default='True',
              help='Maximum number of retry attempts to establish an initial connection to the host(s). 0 means no retries, and -1 means to retry forever.')
@click.option('--connect-timeout', default=30000, show_default=True,
              help='Timeout, in milliseconds, for establishing an initial connection to the broker')
@click.option('--direct-transport/--no-direct-transport', default=True, show_default='True',
              help='Use Direct Transport mode for sending non-persistent messages. When disabled, the Guaranteed Transport mode is used.')
@click.option('--keepalive-count', default=3, show_default='True',
              help='Number of consecutive application-level keepalive messages sent without the broker response before the connection is closed')
@click.option('--enable-keepalive/--no-enable-keepalive', default=True, show_default='True',
              help='Enable application-level keepalive messages to maintain a connection with the broker')
@click.option('--keepalive-interval', default=3000, show_default='True',
              help='The interval, in milliseconds,  between application-level keepalive messages')
@click.option('--enable-callback-io-thread/--no-enable-callback-io-thread', default=False, show_default='True',
              help='Restricted use. Enable delivery of asynchronous messages directly from the I/O thread.')
@click.option('--enable-optimize-for-direct', default=False, show_default='False',
              help='Optimize for Direct Transport delivery mode and limit the client application is limited to one Publisher and one non-durable Subscriber')
@click.option('--transport-port', default=-1, show_default='True',
              help='The connection port number on the broker for SMF clients. The value "-1" means the port is specified in the JNDI Properties file')
@click.option('--read-timeout', default=10000, show_default='True',
              help='The timeout, in milliseconds, for reading a reply from the broker')
@click.option('--receive-buffer-size', default=65536, show_default='True',
              help='Size of the receive socket buffer, in bytes. It corresponds to the SO_RCVBUF socket option')
@click.option('--reconnect-retry-count', default=3, show_default='True',
              help='Number of attempts to reconnect to the host(s) after the connection has been lost. "-1" means to retry forever.')
@click.option('--reconnect-retry-wait', default=3000, show_default='True',
              help='Wait time before making another attempt to connect or reconnect to the host after the connection has been lost, in milliseconds.')
@click.option('--send-buffer-size', default=65536, show_default='True',
              help='Size of the send socket buffer, in bytes. It corresponds to the SO_SNDBUF socket option')
@click.option('--tcp-no-delay/--no-tcp-no-delay', default=True, show_default='True',
              help='Enable Nagle''s algorithm for TCP Congestion')
@click.option('--xa/--no-xa', default=True, show_default='True',
              help='Enable XA Connection Factory')
def cf_create(ctx, name, enable_dup_clientid, description, client_id, enable_dynamic_durable,
            enable_dynamic_ttl, receive_ack_timeout, receive_reconnect_count, receive_reconnect_wait,
            receive_window, receive_window_threshold, send_ack_timeout, send_window,
            persistent, dmq_eligible, eliding_eligible, enable_jmx_userid,
            text_as_binary, compression_level, connect_retry_count, connect_retry_per_host_count,
            connect_timeout, direct_transport, keepalive_count,
            enable_keepalive, keepalive_interval,
            enable_callback_io_thread, enable_optimize_for_direct, transport_port, read_timeout, receive_buffer_size,
            reconnect_retry_count, reconnect_retry_wait, send_buffer_size, tcp_no_delay, xa,
            **kwargs):
    try:
        logging.debug(f'cf_create {name} {kwargs}')
        sm = getSolaceMgr(ctx, kwargs)
        dict = {
            'allowDuplicateClientIdEnabled': enable_dup_clientid,
            'clientDescription': description,
            'clientId': client_id,
            'connectionFactoryName': name,
            'dynamicEndpointCreateDurableEnabled': enable_dynamic_durable,
            'dynamicEndpointRespectTtlEnabled': enable_dynamic_ttl,
            'guaranteedReceiveAckTimeout': receive_ack_timeout,
            'guaranteedReceiveReconnectRetryCount': receive_reconnect_count,
            'guaranteedReceiveReconnectRetryWait': receive_reconnect_wait,
            'guaranteedReceiveWindowSize': receive_window,
            'guaranteedReceiveWindowSizeAckThreshold': receive_window_threshold,
            'guaranteedSendAckTimeout': send_ack_timeout,
            'guaranteedSendWindowSize': send_window,
            'messagingDefaultDeliveryMode': 'persistent' if persistent else 'non-persistent',
            'messagingDefaultDmqEligibleEnabled': dmq_eligible,
            'messagingDefaultElidingEligibleEnabled': eliding_eligible,
            'messagingJmsxUserIdEnabled': enable_jmx_userid,
            'messagingTextInXmlPayloadEnabled': text_as_binary,
            'transportCompressionLevel': compression_level,
            'transportConnectRetryCount': connect_retry_count,
            'transportConnectRetryPerHostCount': connect_retry_per_host_count,
            'transportConnectTimeout': connect_timeout,
            'transportDirectTransportEnabled': direct_transport,
            'transportKeepaliveCount': keepalive_count,
            'transportKeepaliveEnabled': enable_keepalive,
            'transportKeepaliveInterval': keepalive_interval,
            'transportMsgCallbackOnIoThreadEnabled': enable_callback_io_thread,
            'transportOptimizeDirectEnabled': enable_optimize_for_direct,
            'transportPort': transport_port,
            'transportReadTimeout': read_timeout,
            'transportReceiveBufferSize': receive_buffer_size,
            'transportReconnectRetryCount': reconnect_retry_count,
            'transportReconnectRetryWait': reconnect_retry_wait,
            'transportSendBufferSize': send_buffer_size,
            'transportTcpNoDelayEnabled': tcp_no_delay,
            'xaEnabled': xa,
        }
        jndiMgr = JndiMgr(sm)
        res = jndiMgr.create(dict)
        logger.debug("create - END")
    except Exception as ex:
        logger.error(f"cf_create - END + {ex}")



@cf.command(name='update')
def cf_update():
    pass

@cf.command(name='show')
def cf_show():
    pass

@cf.command(name='remove')
def cf_remove():
    pass

@cf.command(name='list')
def cf_list():
    pass


@jndi.command()
def topic():
    pass


@jndi.command()
def queue():
    pass


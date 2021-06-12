import logging
import click

from common import add_if
from common import send_response
from common import my_global_options
from managers import RestMgr


logger = logging.getLogger(__name__)
suburl = 'clientProfiles'


@click.group()
def clientprofile():
    '''Manage the Client Profiles in a Message VPN'''
    pass


@clientprofile.command()
@click.argument("name")
@click.option('--enable-bridge/--no-enable-bridge', default=True, show_default=True,
              help='Manage Bridge clients using the client-profile to connect')
@click.option('--enable-cut-through/--no-enable-cut-through', default=False, show_default=True,
              help='Enable or disable allowing clients using the client-profile to bind to endpoints with the cut-through forwarding delivery mode')
@click.option('--client-create-durability', type=click.Choice(['all', 'durable', 'non-durable']), default='all',
              show_default=True,
              help='Types of Queues and Topic Endpoints that clients using the client-profile can create')
@click.option('--enable-client-endpoint/--no-enable-client-endpoint', default=True, show_default=True,
              help='Allow clients using the Client Profile to create topic endpoints or queues')
@click.option('--enable-gm-receive/--no-enable-gm-receive', default=True, show_default=True,
              help='Allow clients using the Client Profile to receive guaranteed messages')
@click.option('--enable-gm-send/-no-enable-gm-send', default=True, show_default=True,
              help='Allow clients using the Client Profile to send guaranteed messages')
@click.option('--enable-shared/-no-enable-shared', default=True, show_default=True,
              help='Enable or disable allowing shared subscriptions')
@click.option('--enable-tx/--no-enable-tx', default=False, show_default=True,
              help='Enable or disable allowing clients using the Client Profile to establish transacted sessions')
@click.option('--template-queue', type=str,
              help='Name of a queue template to copy settings from when a new queue is created by a client using the Client Profile')
@click.option('--template-topic-endpoint', type=str,
              help='Name of a topic endpoint template to copy settings from when a new topic endpoint is created by a client using the Client Profile')
@click.option('--compress/--no-compress', default=True, show_default=True,
              help='Enable or disable allowing clients using the Client Profile to use compression')
@click.option('--eliding-delay', default=0, type=int, show_default=True,
              help='Amount of time to delay the delivery of messages to clients using the Client Profile after the initial message has been delivered (the eliding delay interval), in milliseconds')
@click.option('--enable-eliding/--no-eliding', default=True, show_default=True,
              help='Enable or disable message eliding for clients using the Client Profile')
@click.option('--eliding-max-topics', default=256, show_default=True,
              help='Maximum number of topics tracked for message eliding per client connection using the Client Profile')
@click.option('--max-client-connects', type=int,
              help='Maximum number of client connections per Client Username')
@click.option('--max-egress-flows', type=int, default=16000, show_default=True,
              help='Maximum number of transmit flows that can be created by one client')
@click.option('--max-client-created-endpoints', type=int, default=16000, show_default=True,
              help='Maximum number of queues and topic endpoints that can be created by clients with the same Client Username')
@click.option('--max-ingress-flows', type=int, default=16000, show_default=True,
              help='Maximum number of receive flows that can be created by one client')
@click.option('--max-subscriptions', type=int,
              help='Maximum number of subscriptions per client')
@click.option('--max-tx-sessions', type=int, default=10, show_default=True,
              help='Maximum number of transacted sessions that can be created by one client')
@click.option('--max-client-tx', type=int,
              help='Maximum number of transactions that can be created by one client')
@click.option('--reject-no-subscription/--no-reject-no-subscription', default=False, show_default=True,
              help='Enable or disable the sending of a negative acknowledgement (NACK) to a client when discarding a guaranteed message due to no matching subscription found')
@click.option('--enable-connect-standby/--no-enable-connect-standby', default=False, show_default=True,
              help='Allow clients to connect to the Message VPN when its replication state is standby')
@click.option('--max-client-smf-connects', type=int,
              help='Maximum number of SMF client connections per Client Username')
@click.option('--web-inactive-timeout', default=30, show_default=True,
              help='Timeout for inactive Web Transport client sessions, in seconds')
@click.option('--max-client-web-connects', type=int,
              help='Maximum number of Web Transport client connections per Client Username')
@click.option('--max-web-payload', default=1000000, show_default=True,
              help='Maximum Web Transport payload size, in bytes, before fragmentation occurs for clients. The size of the header is not included')
@click.option('--tcp-congestion-size', default=2, show_default=True,
              help='TCP initial congestion window size for clients, in multiples of the TCP Maximum Segment Size (MSS).')
@click.option('--tcp-keepalive', default=5, show_default=True,
              help='Number of TCP keepalive retransmissions to a client before declaring that it is not available')
@click.option('--tcp-keepalive-idle', default=3, show_default=True,
              help='Amount of time, in seconds,  a client connection must remain idle before TCP begins sending keepalive probes')
@click.option('--tcp-keepalive-interval', default=1, show_default=True,
              help='Amount of time, in seconds,  between TCP keepalive retransmissions to a client when no acknowledgement is received')
@click.option('--tcp-max-segment-size', default=1460, show_default=True,
              help='TCP maximum segment size for clients, in kilobytes.')
@click.option('--tcp-max-window-size', default=256, show_default=True,
              help='TCP maximum window size for clients, in kilobytes.')
@click.option('--allow-tls-downgrade/--no-tls-allow-downgrade', default=True, show_default=True,
              help='Enable or disable allowing a client to downgrade an encrypted connection to plain text')
@my_global_options
def create(
        name,
        enable_bridge, enable_cut_through, client_create_durability,
        enable_client_endpoint, enable_gm_receive, enable_gm_send, enable_shared,
        enable_tx, template_queue, template_topic_endpoint,
        compress, eliding_delay, enable_eliding, eliding_max_topics, max_client_connects, max_egress_flows,
        max_client_created_endpoints, max_ingress_flows, max_subscriptions, max_tx_sessions, max_client_tx,
        reject_no_subscription, enable_connect_standby, max_client_smf_connects, web_inactive_timeout,
        max_client_web_connects, max_web_payload, tcp_congestion_size, tcp_keepalive,
        tcp_keepalive_idle, tcp_keepalive_interval, tcp_max_segment_size, tcp_max_window_size,
        allow_tls_downgrade,
        **kwargs):
    '''Create a new client profile'''
    clientprofile_upsert(True, name,
                         enable_bridge, enable_cut_through, client_create_durability,
                         enable_client_endpoint, enable_gm_receive, enable_gm_send, enable_shared,
                         enable_tx, template_queue, template_topic_endpoint,
                         compress, eliding_delay, enable_eliding, eliding_max_topics, max_client_connects,
                         max_egress_flows,
                         max_client_created_endpoints, max_ingress_flows, max_subscriptions, max_tx_sessions,
                         max_client_tx,
                         reject_no_subscription, enable_connect_standby, max_client_smf_connects, web_inactive_timeout,
                         max_client_web_connects, max_web_payload, tcp_congestion_size, tcp_keepalive,
                         tcp_keepalive_idle, tcp_keepalive_interval, tcp_max_segment_size, tcp_max_window_size,
                         allow_tls_downgrade,
                         **kwargs)


def clientprofile_upsert(is_post, name,
                         enable_bridge, enable_cut_through, client_create_durability,
                         enable_client_endpoint, enable_gm_receive, enable_gm_send, enable_shared,
                         enable_tx, template_queue, template_topic_endpoint,
                         compress, eliding_delay, enable_eliding, eliding_max_topics, max_client_connects,
                         max_egress_flows,
                         max_client_created_endpoints, max_ingress_flows, max_subscriptions, max_tx_sessions,
                         max_client_tx,
                         reject_no_subscription, enable_connect_standby, max_client_smf_connects, web_inactive_timeout,
                         max_client_web_connects, max_web_payload, tcp_congestion_size, tcp_keepalive,
                         tcp_keepalive_idle, tcp_keepalive_interval, tcp_max_segment_size, tcp_max_window_size,
                         allow_tls_downgrade,
                         **kwargs):
    dict = {}

    add_if(dict, enable_bridge, 'allowBridgeConnectionsEnabled')
    add_if(dict, enable_cut_through, 'allowCutThroughForwardingEnabled')
    add_if(dict, client_create_durability, 'allowGuaranteedEndpointCreateDurability', client_create_durability)
    add_if(dict, enable_client_endpoint, 'allowGuaranteedEndpointCreateEnabled')
    add_if(dict, enable_gm_receive, 'allowGuaranteedMsgReceiveEnabled')
    add_if(dict, enable_gm_send, 'allowGuaranteedMsgSendEnabled')
    add_if(dict, enable_shared, 'allowSharedSubscriptionsEnabled')
    add_if(dict, enable_tx, 'allowTransactedSessionsEnabled')
    add_if(dict, template_queue, 'apiQueueManagementCopyFromOnCreateTemplateName', template_queue)
    add_if(dict, template_topic_endpoint, 'apiTopicEndpointManagementCopyFromOnCreateTemplateName',
           template_topic_endpoint)
    add_if(dict, name, 'clientProfileName', name)
    add_if(dict, compress, 'compressionEnabled')
    add_if(dict, eliding_delay, 'elidingDelay', eliding_delay, 0)
    add_if(dict, enable_eliding, 'elidingEnabled')
    add_if(dict, eliding_max_topics, 'elidingMaxTopicCount', eliding_max_topics, 0)
    add_if(dict, max_client_connects, 'maxConnectionCountPerClientUsername', max_client_connects, 0)
    add_if(dict, max_egress_flows, 'maxEgressFlowCount', max_egress_flows, 0)
    add_if(dict, max_client_created_endpoints, 'maxEndpointCountPerClientUsername', max_client_created_endpoints, 0)
    add_if(dict, max_ingress_flows, 'maxIngressFlowCount', max_ingress_flows, 0)
    add_if(dict, max_subscriptions, 'maxSubscriptionCount', max_subscriptions, 0)
    add_if(dict, max_tx_sessions, 'maxTransactedSessionCount', max_tx_sessions, 0)
    add_if(dict, max_client_tx, 'maxTransactionCount', max_client_tx, 0)
    add_if(dict, reject_no_subscription, 'rejectMsgToSenderOnNoSubscriptionMatchEnabled')
    add_if(dict, enable_connect_standby, 'replicationAllowClientConnectWhenStandbyEnabled')
    add_if(dict, max_client_smf_connects, 'serviceSmfMaxConnectionCountPerClientUsername', max_client_smf_connects, 0)
    add_if(dict, web_inactive_timeout, 'serviceWebInactiveTimeout', web_inactive_timeout, 0)
    add_if(dict, max_client_web_connects, 'serviceWebMaxConnectionCountPerClientUsername', max_client_web_connects, 0)
    add_if(dict, max_web_payload, 'serviceWebMaxPayload', max_web_payload, 0)
    add_if(dict, tcp_congestion_size, 'tcpCongestionWindowSize', tcp_congestion_size, 0)
    add_if(dict, tcp_keepalive, 'tcpKeepaliveCount', tcp_keepalive, 0)
    add_if(dict, tcp_keepalive_idle, 'tcpKeepaliveIdleTime', tcp_keepalive_idle, 0)
    add_if(dict, tcp_keepalive_interval, 'tcpKeepaliveInterval', tcp_keepalive_interval, 0)
    add_if(dict, tcp_max_segment_size, 'tcpMaxSegmentSize', tcp_max_segment_size, 0)
    add_if(dict, tcp_max_window_size, 'tcpMaxWindowSize', tcp_max_window_size, 0)
    add_if(dict, allow_tls_downgrade, 'tlsAllowDowngradeToPlainTextEnabled')

    rest_mgr = RestMgr(kwargs)
    if is_post:
        res = rest_mgr.post(suburl, dict)
    else:
        res = rest_mgr.patch(suburl, name, dict)
    send_response(res)


@clientprofile.command()
@click.argument("name")
@click.option('--enable-bridge/--no-enable-bridge', default=None,
              help='Manage Bridge clients using the client-profile to connect')
@click.option('--enable-cut-through/--no-enable-cut-through', default=None,
              help='Enable or disable allowing clients using the client-profile to bind to endpoints with the cut-through forwarding delivery mode')
@click.option('--client-create-durability', type=click.Choice(['all', 'durable', 'non-durable']),
              help='Types of Queues and Topic Endpoints that clients using the client-profile can create')
@click.option('--enable-client-endpoint/--no-enable-client-endpoint', default=None,
              help='Allow clients using the Client Profile to create topic endpoints or queues')
@click.option('--enable-gm-receive/--no-enable-gm-receive', default=None,
              help='Allow clients using the Client Profile to receive guaranteed messages')
@click.option('--enable-gm-send/-no-enable-gm-send', default=None,
              help='Allow clients using the Client Profile to send guaranteed messages')
@click.option('--enable-shared/-no-enable-shared', default=None,
              help='Enable or disable allowing shared subscriptions')
@click.option('--enable-tx/--no-enable-tx', default=None,
              help='Enable or disable allowing clients using the Client Profile to establish transacted sessions')
@click.option('--template-queue', type=str,
              help='Name of a queue template to copy settings from when a new queue is created by a client using the Client Profile')
@click.option('--template-topic-endpoint', type=str,
              help='Name of a topic endpoint template to copy settings from when a new topic endpoint is created by a client using the Client Profile')
@click.option('--compress/--no-compress', default=None,
              help='Enable or disable allowing clients using the Client Profile to use compression')
@click.option('--eliding-delay', default=0, type=int,
              help='Amount of time to delay the delivery of messages to clients using the Client Profile after the initial message has been delivered (the eliding delay interval), in milliseconds')
@click.option('--enable-eliding/--no-eliding', default=None,
              help='Enable or disable message eliding for clients using the Client Profile')
@click.option('--eliding-max-topics', default=256,
              help='Maximum number of topics tracked for message eliding per client connection using the Client Profile')
@click.option('--max-client-connects', type=int,
              help='Maximum number of client connections per Client Username')
@click.option('--max-egress-flows', type=int, default=16000,
              help='Maximum number of transmit flows that can be created by one client')
@click.option('--max-client-created-endpoints', type=int, default=16000,
              help='Maximum number of queues and topic endpoints that can be created by clients with the same Client Username')
@click.option('--max-ingress-flows', type=int, default=16000,
              help='Maximum number of receive flows that can be created by one client')
@click.option('--max-subscriptions', type=int,
              help='Maximum number of subscriptions per client')
@click.option('--max-tx-sessions', type=int, default=10,
              help='Maximum number of transacted sessions that can be created by one client')
@click.option('--max-client-tx', type=int,
              help='Maximum number of transactions that can be created by one client')
@click.option('--reject-no-subscription/--no-reject-no-subscription', default=None,
              help='Enable or disable the sending of a negative acknowledgement (NACK) to a client when discarding a guaranteed message due to no matching subscription found')
@click.option('--enable-connect-standby/--no-enable-connect-standby', default=None,
              help='Allow clients to connect to the Message VPN when its replication state is standby')
@click.option('--max-client-smf-connects', type=int,
              help='Maximum number of SMF client connections per Client Username')
@click.option('--web-inactive-timeout', type=int,
              help='Timeout for inactive Web Transport client sessions, in seconds')
@click.option('--max-client-web-connects', type=int,
              help='Maximum number of Web Transport client connections per Client Username')
@click.option('--max-web-payload', type=int,
              help='Maximum Web Transport payload size, in bytes, before fragmentation occurs for clients. The size of the header is not included')
@click.option('--tcp-congestion-size', type=int,
              help='TCP initial congestion window size for clients, in multiples of the TCP Maximum Segment Size (MSS).')
@click.option('--tcp-keepalive', type=int,
              help='Number of TCP keepalive retransmissions to a client before declaring that it is not available')
@click.option('--tcp-keepalive-idle', type=int,
              help='Amount of time, in seconds,  a client connection must remain idle before TCP begins sending keepalive probes')
@click.option('--tcp-keepalive-interval', default=1,
              help='Amount of time, in seconds,  between TCP keepalive retransmissions to a client when no acknowledgement is received')
@click.option('--tcp-max-segment-size', type=int,
              help='TCP maximum segment size for clients, in kilobytes.')
@click.option('--tcp-max-window-size', type=int,
              help='TCP maximum window size for clients, in kilobytes.')
@click.option('--allow-tls-downgrade/--no-tls-allow-downgrade', default=None,
              help='Enable or disable allowing a client to downgrade an encrypted connection to plain text')
@my_global_options
def update(
        name,
        enable_bridge, enable_cut_through, client_create_durability,
        enable_client_endpoint, enable_gm_receive, enable_gm_send, enable_shared,
        enable_tx, template_queue, template_topic_endpoint,
        compress, eliding_delay, enable_eliding, eliding_max_topics, max_client_connects, max_egress_flows,
        max_client_created_endpoints, max_ingress_flows, max_subscriptions, max_tx_sessions, max_client_tx,
        reject_no_subscription, enable_connect_standby, max_client_smf_connects, web_inactive_timeout,
        max_client_web_connects, max_web_payload, tcp_congestion_size, tcp_keepalive,
        tcp_keepalive_idle, tcp_keepalive_interval, tcp_max_segment_size, tcp_max_window_size,
        allow_tls_downgrade,
        **kwargs):
    '''Update an existing client profile'''
    clientprofile_upsert(False, name,
                         enable_bridge, enable_cut_through, client_create_durability,
                         enable_client_endpoint, enable_gm_receive, enable_gm_send, enable_shared,
                         enable_tx, template_queue, template_topic_endpoint,
                         compress, eliding_delay, enable_eliding, eliding_max_topics, max_client_connects,
                         max_egress_flows,
                         max_client_created_endpoints, max_ingress_flows, max_subscriptions, max_tx_sessions,
                         max_client_tx,
                         reject_no_subscription, enable_connect_standby, max_client_smf_connects, web_inactive_timeout,
                         max_client_web_connects, max_web_payload, tcp_congestion_size, tcp_keepalive,
                         tcp_keepalive_idle, tcp_keepalive_interval, tcp_max_segment_size, tcp_max_window_size,
                         allow_tls_downgrade,
                         **kwargs)


@clientprofile.command()
@click.argument("name")
@my_global_options
def show(name, **kwargs):
    '''Show the properties of a client profile'''
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.get(suburl, name)
    send_response(res)


@clientprofile.command()
@my_global_options
def list(**kwargs):
    '''List all the client profiles in a Message VPN'''
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.get(suburl)
    send_response(res)


@clientprofile.command()
@click.argument("name")
@my_global_options
def remove(name, **kwargs):
    '''Remove a client profile'''
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.delete(suburl, name)
    send_response(res)

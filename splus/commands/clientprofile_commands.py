import logging
import click

from common import *
from managers import RestMgr

logger = logging.getLogger(__name__)


@click.group()
def clientprofile():
    pass

@clientprofile.command(name='create')
@click.argument("name")
@my_global_options
@click.option('--enable-bridge/--no-enable-bridge', default=True, show_default=True,
              help='')
@click.option('--enable-cut-through/--no-enable-cut-through', default=False, show_default=True,
              help='')
@click.option('--client-create-durability', type=click.Choice(['all', 'durable', 'non-durable']), default='all', show_default=True,
              help='')
@click.option('--enable-client-endpoint/--no-enable-client-endpoint', default=True, show_default=True,
              help='')
@click.option('--enable-gm-receive/--no-enable-gm-receive', default=True, show_default=True,
              help='')
@click.option('--enable-gm-send/-no-enable-gm-send', default=True, show_default=True,
              help='')
@click.option('--enable-shared/-no-enable-shared', default=True, show_default=True,
              help='')
@click.option('--enable-tx/-no-enable-tx', default=True, show_default=True,
              help='')
@click.option('--template-queue', type=str,
              help='')
@click.option('--template-topic-endpoint', type=str,
              help='')
@click.option('--compress/--no-compress', default=True, show_default=True,
              help='')
@click.option('--eliding-delay', default=0, type=int,  show_default=True,
              help='')
@click.option('--enable-eliding/--no-eliding', default=True, show_default=True,
              help='')
@click.option('--eliding-max-topics', default=256, show_default=True,
              help='')
@click.option('--max-client-connects', type=int,
              help='')
@click.option('--max-egress-flows', type=int, default=16000, show_default=True,
              help='')
@click.option('--max-client-created-endpoints', type=int, default=16000, show_default=True,
              help='')
@click.option('--max-ingress-flows', type=int, default=16000, show_default=True,
              help='')
@click.option('--max-subscriptions', type=int,
              help='')
@click.option('--max-tx-sessions', type=int, default=10, show_default=True,
              help='')
@click.option('--max-client-tx', type=int,
              help='')
@click.option('--reject-no-subscription/--no-reject-no-subscription', default=False, show_default=True,
              help='')
@click.option('--enable-connect-standby/--no-enable-connect-standby', default=False, show_default=True,
              help='')
@click.option('--max-client-smf-connects', type=int,
              help='')
@click.option('--web-inactive-timeout', default=30, show_default=True,
              help='')
@click.option('--max-client-web-connects', type=int,
              help='')
@click.option('--max-web-payload', default=1000000, show_default=True,
              help='')
@click.option('--tcp-congestion-size', default=2, show_default=True,
              help='')
@click.option('--tcp-keepalive', default=5, show_default=True,
              help='')
@click.option('--tcp-keepalive-idle', default=3, show_default=True,
              help='')
@click.option('--tcp-keepalive-interval', default=1, show_default=True,
              help='')
@click.option('--tcp-max-segment-size', default=1460, show_default=True,
              help='')
@click.option('--tcp-max-window-size', default=256, show_default=True,
              help='')
@click.option('--allow-tls-downgrade/--no-tls-allow-downgrade', default=True,
              help='')
def clientprofile_create(
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
    clientprofile_upsert(True, name,
                         enable_bridge, enable_cut_through, client_create_durability,
                         enable_client_endpoint, enable_gm_receive, enable_gm_send, enable_shared,
                         enable_tx, template_queue, template_topic_endpoint,
                         compress, eliding_delay, enable_eliding, eliding_max_topics, max_client_connects, max_egress_flows,
                         max_client_created_endpoints, max_ingress_flows, max_subscriptions, max_tx_sessions, max_client_tx,
                         reject_no_subscription, enable_connect_standby, max_client_smf_connects, web_inactive_timeout,
                         max_client_web_connects, max_web_payload, tcp_congestion_size, tcp_keepalive,
                         tcp_keepalive_idle, tcp_keepalive_interval, tcp_max_segment_size, tcp_max_window_size,
                         allow_tls_downgrade,
                         **kwargs)


def clientprofile_upsert(is_post, name,
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
    try:
        logging.debug('start')

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
        add_if(dict, template_topic_endpoint, 'apiTopicEndpointManagementCopyFromOnCreateTemplateName', template_topic_endpoint)
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
            rest_mgr.post('clientProfiles', dict)
        else:
            rest_mgr.patch('clientProfiles', name, dict)
    except Exception as ex:
        logger.error(f"create Exception: {ex}")



@clientprofile.command(name='update')
@click.argument("name")
@my_global_options
@click.option('--enable-bridge/--no-enable-bridge', default=True, show_default=True,
              help='')
@click.option('--enable-cut-through/--no-enable-cut-through', default=False, show_default=True,
              help='')
@click.option('--client-create-durability', type=click.Choice(['all', 'durable', 'non-durable']), default='all', show_default=True,
              help='')
@click.option('--enable-client-endpoint/--no-enable-client-endpoint', default=True, show_default=True,
              help='')
@click.option('--enable-gm-receive/--no-enable-gm-receive', default=True, show_default=True,
              help='')
@click.option('--enable-gm-send/-no-enable-gm-send', default=True, show_default=True,
              help='')
@click.option('--enable-shared/-no-enable-shared', default=True, show_default=True,
              help='')
@click.option('--enable-tx/-no-enable-tx', default=True, show_default=True,
              help='')
@click.option('--template-queue', type=str,
              help='')
@click.option('--template-topic-endpoint', type=str,
              help='')
@click.option('--compress/--no-compress', default=True, show_default=True,
              help='')
@click.option('--eliding-delay', type=int, default=0, show_default=True,
              help='')
@click.option('--enable-eliding/--no-eliding', default=True, show_default=True,
              help='')
@click.option('--eliding-max-topics', default=256, show_default=True,
              help='')
@click.option('--max-client-connects', type=int,
              help='')
@click.option('--max-egress-flows', type=int, default=16000, show_default=True,
              help='')
@click.option('--max-client-created-endpoints', type=int, default=16000, show_default=True,
              help='')
@click.option('--max-ingress-flows', type=int, default=16000, show_default=True,
              help='')
@click.option('--max-subscriptions', type=int,
              help='')
@click.option('--max-tx-sessions', type=int, default=10, show_default=True,
              help='')
@click.option('--max-client-tx', type=int,
              help='')
@click.option('--reject-no-subscription/--no-reject-no-subscription', default=False, show_default=True,
              help='')
@click.option('--enable-connect-standby/--no-enable-connect-standby', default=False, show_default=True,
              help='')
@click.option('--max-client-smf-connects', type=int,
              help='')
@click.option('--web-inactive-timeout', default=30, show_default=True,
              help='')
@click.option('--max-client-web-connects', type=int,
              help='')
@click.option('--max-web-payload', default=1000000, show_default=True,
              help='')
@click.option('--tcp-congestion-size', default=2, show_default=True,
              help='')
@click.option('--tcp-keepalive', default=5, show_default=True,
              help='')
@click.option('--tcp-keepalive-idle', default=3, show_default=True,
              help='')
@click.option('--tcp-keepalive-interval', default=1, show_default=True,
              help='')
@click.option('--tcp-max-segment-size', default=1460, show_default=True,
              help='')
@click.option('--tcp-max-window-size', default=256, show_default=True,
              help='')
@click.option('--allow-tls-downgrade/--no-tls-allow-downgrade', default=True,
              help='')
def clientprofile_update(
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
    clientprofile_upsert(False, name,
                         enable_bridge, enable_cut_through, client_create_durability,
                         enable_client_endpoint, enable_gm_receive, enable_gm_send, enable_shared,
                         enable_tx, template_queue, template_topic_endpoint,
                         compress, eliding_delay, enable_eliding, eliding_max_topics, max_client_connects, max_egress_flows,
                         max_client_created_endpoints, max_ingress_flows, max_subscriptions, max_tx_sessions, max_client_tx,
                         reject_no_subscription, enable_connect_standby, max_client_smf_connects, web_inactive_timeout,
                         max_client_web_connects, max_web_payload, tcp_congestion_size, tcp_keepalive,
                         tcp_keepalive_idle, tcp_keepalive_interval, tcp_max_segment_size, tcp_max_window_size,
                         allow_tls_downgrade,
                         **kwargs)


@clientprofile.command(name='show')
@click.argument("name")
@my_global_options
def clientprofile_show( name, **kwargs):
    try:
        rest_mgr = RestMgr(kwargs)
        rest_mgr.get('clientProfiles', name)
    except Exception as ex:
        logger.error(f"{ex}")


@clientprofile.command(name='list')
@click.pass_context
@my_global_options
def clientprofile_list(ctx, **kwargs):
    try:
        rest_mgr = RestMgr(kwargs)
        rest_mgr.get('clientProfiles')
    except Exception as ex:
        logger.error(f"{ex}")

@clientprofile.command(name='remove')
@click.argument("name")
@my_global_options
def clientprofile_remove(name, **kwargs):
    try:
        logger.debug(f"remove {name}")
        rest_mgr = RestMgr(kwargs)
        rest_mgr.delete('clientProfiles', name)
    except Exception as ex:
        logger.error(f"{ex}")


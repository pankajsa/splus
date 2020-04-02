import logging
import click

from common import *
from managers import RestMgr

logger = logging.getLogger(__name__)

suburl = 'msgVpns'


@click.group()
def msgvpn(**kwargs):
    pass


@msgvpn.command()
@click.argument("name")
@click.option('--alias', help='')
@click.option('--basic-authn/--no-basic-authn', default=True, show_default=True, help='')
@click.option('--basic-authn-profile', help='')
@click.option('--basic-radius-domain', help='')
@click.option('--basic-authn-type', help='')
@click.option('--enable-cert-api-username/--no-enable-cert-api-username', default=True, show_default=True, help='')
@click.option('--enable-cert-authn/--no-enable-cert-authn', default=True, show_default=True, help='')
@click.option('--max-chain-depth', default=3, show_default=True, help='')
@click.option('--cert-revoke-check', type=click.Choice(['allow-all', 'allow-unknown', 'allow-valid']), default='allow-valid', show_default=True, help='')
@click.option('--cert-user-source',type=click.Choice(['common-name','subject-alternate-name-msupn']), default='common-name', show_default=True, help='')
@click.option('--cert-date-check/--no-cert-date-check', default=True, show_default=True, help='')
@click.option('--enable-kerberos-api-username/--no-enable-kerberos-api-username', default=False, show_default=True, help='')
@click.option('--enable-kereberos-authn/--no-enable-kereberos-authn', default=False, show_default=True, help='')
@click.option('--default-oauth-provider', help='')
@click.option('--enable-oauth/--no-enable-oauth', default=True, show_default=True, help='')
@click.option('--ldap-attribute-name', help='')
@click.option('--enable-trim-ldap-domain/--no-enable-trim-ldap-domain', default=False, show_default=True, help='')
@click.option('--ldap-authz-profile', help='')
@click.option('--authz-type', type=click.Choice(['ldap','internal']), default='internal', show_default=True, help='')
@click.option('--enable-bridge-cn-check/--no-enable-bridge-cn-check', default=True, show_default=True, help='')
@click.option('--max-chain-depth-bridge', default=3, show_default=True, help='')
@click.option('--cert-date-check-bridge/--no-cert-date-check-bridge', default=True, show_default=True, help='')
@click.option('--enable-cache-mgmt/--no-enable-cache-mgmt', default=True, show_default=True, help='')
@click.option('--dmr/--no-dmr', default=True, show_default=True, help='')
@click.option('--enable/--no-enable', default=False, show_default=True, help='')
@click.option('--event-log-tag', help='')
@click.option('--publish-client-events/--no-publish-client-events', default=True, show_default=True, help='')
@click.option('--publish-vpn-event/--no-publish-vpn-event', default=True, show_default=True, help='')
@click.option('--event-subscription-mode',type=click.Choice(['off', 'on-with-format-v2']), show_default=True, help='')
@click.option('--enable-mqtt-topics/--no-enable-mqtt-topics', default=True, show_default=True, help='')
@click.option('--enable-smf-topics/--no-enable-smf-topics', default=True, show_default=True, help='')
@click.option('--export-subscriptions/--no-export-subscriptions', default=True, show_default=True, help='')
@click.option('--jndi/--no-jndi', default=True, show_default=True, help='')
@click.option('--max-connections', type=int, help='')
@click.option('--max-egress-flows', default=16000, show_default=True, help='')
@click.option('--max-endpoints', default=16000, show_default=True, help='')
@click.option('--max-ingress-flows', default=16000, show_default=True, help='')
@click.option('--max-spool', default=0, show_default=True, help='')
@click.option('--max-subscriptions', help='')
@click.option('--max-tx-sessions', type=int, help='')
@click.option('--max-tx', type=int, help='')
@click.option('--mqtt-retain-mem', default=0, show_default=True, help='')
@click.option('--ip-version', type=click.Choice(['ipv4', 'ipv6']), help='')
@click.option('--replicate-ack-interval', default=20, show_default=True, help='')
@click.option('--bridge-username', help='')
@click.option('--bridge-password', help='')
@click.option('--bridge-cert-content', help='')
@click.option('--bridge-cert-password', help='')
@click.option('--replicate-authn', type=click.Choice(['basic', 'client-certificate']), help='')
@click.option('--replicate-compress/--no-replicate-compress', default=True, show_default=True, help='')
@click.option('--replicate-window-size', default=0, show_default=True, help='')
@click.option('--replicate-retry-delay', default=0, show_default=True, help='')
@click.option('--tls-replicate/--no-tls-replicate', default=True, show_default=True, help='')
@click.option('--replicate-cp', help='')
@click.option('--replicate/--no-replicate', default=False, show_default=True, help='')
@click.option('--replicate-queue', type=click.Choice(['fail-on-existing-queue', 'force-use-existing-queue', 'force-recreate-queue']), help='')
@click.option('--replicate-max-spool', default=60000, show_default=True, help='')
@click.option('--replicate-reject-on-discard/--no-replicate-reject-on-discard', default=True, show_default=True, help='')
@click.option('--reject-on-async/--no-reject-on-async', default=True, show_default=True, help='')
@click.option('--replicate-role', type=click.Choice(['active', 'standby']), default='active', show_default=True, help='')
@click.option('--replicate-tx-mode', type=click.Choice(['sync', 'async']), default='sync', show_default=True, help='')
@click.option('--rest-cn-check/--no-rest-cn-check', default=True, show_default=True, help='')
@click.option('--rest-cert-max-depth', default=3, show_default=True, help='')
@click.option('--rest-cert-date-check/--no-rest-cert-date-check', default=True, show_default=True, help='')
@click.option('--msgbus-client-admin/--no-msgbus-client-admin', default=True, show_default=True, help='')
@click.option('--msgbus-admin-cache/--no-msgbus-admin-cache', default=True, show_default=True, help='')
@click.option('--msgbus-admin/--no-msgbus-admin', default=True, show_default=True, help='')
@click.option('--msgbus/--no-msgbus', default=True, show_default=True, help='')
# @click.option('--msgbus-legacy/--no-msgbus-legacy', default=True, show_default=True, help='')
@click.option('--msgbus-show/--no-msgbus-show', default=True, show_default=True, help='')
@click.option('--amqp-max-conn', default=0, show_default=True, help='')
@click.option('--amqp-plaintext/--no-amqp-plaintext', default=False, show_default=True, help='')
@click.option('--amqp-port', default=0, show_default=True, help='')
@click.option('--amqp-tls/--no-amqp-tls', default=False, show_default=True, help='')
@click.option('--amqp-tls-port', default=0, show_default=True, help='')
@click.option('--mqtt-max-conn', type=int, help='')
@click.option('--mqtt-plaintext/--no-mqtt-plaintext', default=False, show_default=True, help='')
@click.option('--mqtt-port', default=0, show_default=True, help='')
@click.option('--mqtt-tls/--no-mqtt-tls', default=False, show_default=True, help='')
@click.option('--mqtt-tls-port', default=0, show_default=True, help='')
@click.option('--mqtt-wss/--no-mqtt-wss', default=False, show_default=True, help='')
@click.option('--mqtt-wss-port', default=0, show_default=True, help='')
@click.option('--mqtt-ws/--no-mqtt-ws', default=False, show_default=True, help='')
@click.option('--mqtt-ws-port', default=0, show_default=True, help='')
@click.option('--rest-max-conn', type=int, help='')
@click.option('--rest-plaintext/--no-rest-plaintext', default=False, show_default=True, help='')
@click.option('--rest-port', default=0, show_default=True, help='')
@click.option('--rest-tls/--no-rest-tls', default=False, show_default=True, help='')
@click.option('--rest-tls-port', default=0, show_default=True, help='')
@click.option('--rest--gateway-mode/--no-rest--gateway-mode', default=True, show_default=True, help='')
@click.option('--rest-max-outgoing-conn', default=0, show_default=True, help='')
@click.option('--smf-max-conn', type=int, help='')
@click.option('--smf-plaintext/--no-smf-plaintext', default=True, show_default=True, help='')
@click.option('--smf-tls/--no-smf-tls', default=True, show_default=True, help='')
@click.option('--web-max-conn', type=int, help='')
@click.option('--web-plaintext/--no-web-plaintext', default=True, show_default=True, help='')
@click.option('--web-tls/--no-web-tls', default=True, show_default=True, help='')
@click.option('--tls-downgrade/--no-tls-downgrade', default=True, show_default=True, help='')
@my_global_options
def create(name,
           alias, basic_authn, basic_authn_profile, basic_radius_domain, basic_authn_type,
           enable_cert_api_username, enable_cert_authn, max_chain_depth, cert_revoke_check, cert_user_source,
           cert_date_check, enable_kerberos_api_username, enable_kereberos_authn, default_oauth_provider, enable_oauth,
           ldap_attribute_name, enable_trim_ldap_domain, ldap_authz_profile, authz_type,
           enable_bridge_cn_check, max_chain_depth_bridge, cert_date_check_bridge, enable_cache_mgmt,
           dmr, enable, event_log_tag, publish_client_events, publish_vpn_event,
           event_subscription_mode, enable_mqtt_topics, enable_smf_topics, export_subscriptions, jndi,
           max_connections, max_egress_flows, max_endpoints, max_ingress_flows, max_spool, max_subscriptions,
           max_tx_sessions, max_tx, mqtt_retain_mem, ip_version, replicate_ack_interval,
           bridge_username, bridge_password, bridge_cert_content, bridge_cert_password, replicate_authn,
           replicate_compress, replicate_window_size, replicate_retry_delay, tls_replicate, replicate_cp,
           replicate, replicate_queue, replicate_max_spool, replicate_reject_on_discard, reject_on_async,
           replicate_role, replicate_tx_mode, rest_cn_check, rest_cert_max_depth,
           rest_cert_date_check, msgbus_client_admin, msgbus_admin_cache, msgbus_admin,
           msgbus, msgbus_show, amqp_max_conn, amqp_plaintext, amqp_port,
           amqp_tls, amqp_tls_port, mqtt_max_conn, mqtt_plaintext, mqtt_port, mqtt_tls, mqtt_tls_port,
           mqtt_wss, mqtt_wss_port, mqtt_ws, mqtt_ws_port, rest_max_conn,
           rest_plaintext, rest_port, rest_tls, rest_tls_port, rest__gateway_mode,
           rest_max_outgoing_conn, smf_max_conn, smf_plaintext, smf_tls, web_max_conn,
           web_plaintext, web_tls, tls_downgrade,
        **kwargs):
    upsert(True, name,
           alias, basic_authn, basic_authn_profile, basic_radius_domain, basic_authn_type,
           enable_cert_api_username, enable_cert_authn, max_chain_depth, cert_revoke_check, cert_user_source,
           cert_date_check, enable_kerberos_api_username, enable_kereberos_authn, default_oauth_provider, enable_oauth,
           ldap_attribute_name, enable_trim_ldap_domain, ldap_authz_profile, authz_type,
           enable_bridge_cn_check, max_chain_depth_bridge, cert_date_check_bridge, enable_cache_mgmt,
           dmr, enable, event_log_tag, publish_client_events, publish_vpn_event,
           event_subscription_mode, enable_mqtt_topics, enable_smf_topics, export_subscriptions, jndi,
           max_connections, max_egress_flows, max_endpoints, max_ingress_flows, max_spool, max_subscriptions,
           max_tx_sessions, max_tx, mqtt_retain_mem, ip_version, replicate_ack_interval,
           bridge_username, bridge_password, bridge_cert_content, bridge_cert_password, replicate_authn,
           replicate_compress, replicate_window_size, replicate_retry_delay, tls_replicate, replicate_cp,
           replicate, replicate_queue, replicate_max_spool, replicate_reject_on_discard, reject_on_async,
           replicate_role, replicate_tx_mode, rest_cn_check, rest_cert_max_depth,
           rest_cert_date_check, msgbus_client_admin, msgbus_admin_cache, msgbus_admin,
           msgbus, msgbus_show, amqp_max_conn, amqp_plaintext, amqp_port,
           amqp_tls, amqp_tls_port, mqtt_max_conn, mqtt_plaintext, mqtt_port, mqtt_tls, mqtt_tls_port,
           mqtt_wss, mqtt_wss_port, mqtt_ws, mqtt_ws_port, rest_max_conn,
           rest_plaintext, rest_port, rest_tls, rest_tls_port, rest__gateway_mode,
           rest_max_outgoing_conn, smf_max_conn, smf_plaintext, smf_tls, web_max_conn,
           web_plaintext, web_tls, tls_downgrade,
           **kwargs)


def upsert(is_post, name,
 alias, basic_authn, basic_authn_profile, basic_radius_domain, basic_authn_type,
 enable_cert_api_username, enable_cert_authn, max_chain_depth, cert_revoke_check, cert_user_source,
 cert_date_check, enable_kerberos_api_username, enable_kereberos_authn, default_oauth_provider, enable_oauth,
 ldap_attribute_name, enable_trim_ldap_domain, ldap_authz_profile, authz_type,
 enable_bridge_cn_check, max_chain_depth_bridge, cert_date_check_bridge, enable_cache_mgmt,
 dmr, enable, event_log_tag, publish_client_events, publish_vpn_event,
 event_subscription_mode, enable_mqtt_topics, enable_smf_topics, export_subscriptions, jndi,
 max_connections, max_egress_flows, max_endpoints, max_ingress_flows, max_spool, max_subscriptions,
 max_tx_sessions, max_tx, mqtt_retain_mem, ip_version, replicate_ack_interval,
 bridge_username, bridge_password, bridge_cert_content, bridge_cert_password, replicate_authn,
 replicate_compress, replicate_window_size, replicate_retry_delay, tls_replicate, replicate_cp,
 replicate, replicate_queue, replicate_max_spool, replicate_reject_on_discard, reject_on_async,
 replicate_role, replicate_tx_mode, rest_cn_check, rest_cert_max_depth,
 rest_cert_date_check, msgbus_client_admin, msgbus_admin_cache, msgbus_admin,
 msgbus, msgbus_show, amqp_max_conn, amqp_plaintext, amqp_port,
 amqp_tls, amqp_tls_port, mqtt_max_conn, mqtt_plaintext, mqtt_port, mqtt_tls, mqtt_tls_port,
 mqtt_wss, mqtt_wss_port, mqtt_ws, mqtt_ws_port, rest_max_conn,
 rest_plaintext, rest_port, rest_tls, rest_tls_port, rest__gateway_mode,
 rest_max_outgoing_conn, smf_max_conn, smf_plaintext, smf_tls, web_max_conn,
 web_plaintext, web_tls, tls_downgrade,
           **kwargs):
    try:
        logging.debug('start')

        dict = {}
        
        add_if(dict, alias, 'alias', alias)
        add_if(dict, basic_authn, 'authenticationBasicEnabled')
        add_if(dict, basic_authn_profile, 'authenticationBasicProfileName', basic_authn_profile)
        add_if(dict, basic_radius_domain, 'authenticationBasicRadiusDomain', basic_radius_domain)
        add_if(dict, basic_authn_type, 'authenticationBasicType', basic_authn_type)
        add_if(dict, enable_cert_api_username, 'authenticationClientCertAllowApiProvidedUsernameEnabled')
        add_if(dict, enable_cert_authn, 'authenticationClientCertEnabled')
        add_if(dict, max_chain_depth, 'authenticationClientCertMaxChainDepth', max_chain_depth, 0)
        add_if(dict, cert_revoke_check, 'authenticationClientCertRevocationCheckMode', cert_revoke_check)
        add_if(dict, cert_user_source, 'authenticationClientCertUsernameSource', cert_user_source)
        add_if(dict, cert_date_check, 'authenticationClientCertValidateDateEnabled')
        add_if(dict, enable_kerberos_api_username, 'authenticationKerberosAllowApiProvidedUsernameEnabled')
        add_if(dict, enable_kereberos_authn, 'authenticationKerberosEnabled')
        add_if(dict, default_oauth_provider, 'authenticationOauthDefaultProviderName', default_oauth_provider)
        add_if(dict, enable_oauth, 'authenticationOauthEnabled')
        add_if(dict, ldap_attribute_name, 'authorizationLdapGroupMembershipAttributeName', ldap_attribute_name)
        add_if(dict, enable_trim_ldap_domain, 'authorizationLdapTrimClientUsernameDomainEnabled')
        add_if(dict, ldap_authz_profile, 'authorizationProfileName', ldap_authz_profile)
        add_if(dict, authz_type, 'authorizationType', authz_type)
        add_if(dict, enable_bridge_cn_check, 'bridgingTlsServerCertEnforceTrustedCommonNameEnabled')
        add_if(dict, max_chain_depth_bridge, 'bridgingTlsServerCertMaxChainDepth', max_chain_depth_bridge, 0)
        add_if(dict, cert_date_check_bridge, 'bridgingTlsServerCertValidateDateEnabled')
        add_if(dict, enable_cache_mgmt, 'distributedCacheManagementEnabled')
        add_if(dict, dmr, 'dmrEnabled')
        add_if(dict, enable, 'enabled')
        add_if(dict, event_log_tag, 'eventLogTag', event_log_tag)
        add_if(dict, publish_client_events, 'eventPublishClientEnabled')
        add_if(dict, publish_vpn_event, 'eventPublishMsgVpnEnabled')
        add_if(dict, event_subscription_mode, 'eventPublishSubscriptionMode', event_subscription_mode)
        add_if(dict, enable_mqtt_topics, 'eventPublishTopicFormatMqttEnabled', )
        add_if(dict, enable_smf_topics, 'eventPublishTopicFormatSmfEnabled')
        add_if(dict, export_subscriptions, 'exportSubscriptionsEnabled')
        add_if(dict, jndi, 'jndiEnabled')
        add_if(dict, max_connections, 'maxConnectionCount', max_connections, 0)
        add_if(dict, max_egress_flows, 'maxEgressFlowCount', max_egress_flows, 0)
        add_if(dict, max_endpoints, 'maxEndpointCount', max_endpoints, 0)
        add_if(dict, max_ingress_flows, 'maxIngressFlowCount', max_ingress_flows, 0)
        add_if(dict, max_spool, 'maxMsgSpoolUsage', max_spool, 0)
        add_if(dict, max_subscriptions, 'maxSubscriptionCount', max_subscriptions, 0)
        add_if(dict, max_tx_sessions, 'maxTransactedSessionCount', max_tx_sessions, 0)
        add_if(dict, max_tx, 'maxTransactionCount', max_tx, 0)
        add_if(dict, mqtt_retain_mem, 'mqttRetainMaxMemory', mqtt_retain_mem, 0)
        add_if(dict, ip_version, 'preferIpVersion', ip_version)
        add_if(dict, replicate_ack_interval, 'replicationAckPropagationIntervalMsgCount', replicate_ack_interval, 0)
        add_if(dict, bridge_username, 'replicationBridgeAuthenticationBasicClientUsername', bridge_username)
        add_if(dict, bridge_password, 'replicationBridgeAuthenticationBasicPassword', bridge_password)
        add_if(dict, bridge_cert_content, 'replicationBridgeAuthenticationClientCertContent', bridge_cert_content)
        add_if(dict, bridge_cert_password, 'replicationBridgeAuthenticationClientCertPassword', bridge_cert_password)
        add_if(dict, replicate_authn, 'replicationBridgeAuthenticationScheme', replicate_authn)
        add_if(dict, replicate_compress, 'replicationBridgeCompressedDataEnabled')
        add_if(dict, replicate_window_size, 'replicationBridgeEgressFlowWindowSize', replicate_window_size, 0)
        add_if(dict, replicate_retry_delay, 'replicationBridgeRetryDelay', replicate_retry_delay, 0)
        add_if(dict, tls_replicate, 'replicationBridgeTlsEnabled')
        add_if(dict, replicate_cp, 'replicationBridgeUnidirectionalClientProfileName', replicate_cp)
        add_if(dict, replicate, 'replicationEnabled')
        add_if(dict, replicate_queue, 'replicationEnabledQueueBehavior', replicate_queue)
        add_if(dict, replicate_max_spool, 'replicationQueueMaxMsgSpoolUsage', replicate_max_spool)
        add_if(dict, replicate_reject_on_discard, 'replicationQueueRejectMsgToSenderOnDiscardEnabled')
        add_if(dict, reject_on_async, 'replicationRejectMsgWhenSyncIneligibleEnabled', reject_on_async)
        add_if(dict, replicate_role, 'replicationRole', replicate_role)
        add_if(dict, replicate_tx_mode, 'replicationTransactionMode', replicate_tx_mode)
        add_if(dict, rest_cn_check, 'restTlsServerCertEnforceTrustedCommonNameEnabled')
        add_if(dict, rest_cert_max_depth, 'restTlsServerCertMaxChainDepth', rest_cert_max_depth, 0)
        add_if(dict, rest_cert_date_check, 'restTlsServerCertValidateDateEnabled')
        add_if(dict, msgbus_client_admin, 'sempOverMsgBusAdminClientEnabled')
        add_if(dict, msgbus_admin_cache, 'sempOverMsgBusAdminDistributedCacheEnabled')
        add_if(dict, msgbus_admin, 'sempOverMsgBusAdminEnabled')
        add_if(dict, msgbus, 'sempOverMsgBusEnabled')
        # add_if(dict, msgbus_legacy, 'sempOverMsgBusLegacyShowClearEnabled')
        add_if(dict, name, 'msgVpnName', name)
        add_if(dict, msgbus_show, 'sempOverMsgBusShowEnabled')
        add_if(dict, amqp_max_conn, 'serviceAmqpMaxConnectionCount', amqp_max_conn, 0)
        add_if(dict, amqp_plaintext, 'serviceAmqpPlainTextEnabled')
        add_if(dict, amqp_port, 'serviceAmqpPlainTextListenPort', amqp_port, 0)
        add_if(dict, amqp_tls, 'serviceAmqpTlsEnabled')
        add_if(dict, amqp_tls_port, 'serviceAmqpTlsListenPort', amqp_tls_port, 0)
        add_if(dict, mqtt_max_conn, 'serviceMqttMaxConnectionCount', mqtt_max_conn, 0)
        add_if(dict, mqtt_plaintext, 'serviceMqttPlainTextEnabled')
        add_if(dict, mqtt_port, 'serviceMqttPlainTextListenPort', mqtt_port, 0)
        add_if(dict, mqtt_tls, 'serviceMqttTlsEnabled')
        add_if(dict, mqtt_tls_port, 'serviceMqttTlsListenPort', mqtt_tls_port, 0)
        add_if(dict, mqtt_wss, 'serviceMqttTlsWebSocketEnabled')
        add_if(dict, mqtt_wss_port, 'serviceMqttTlsWebSocketListenPort', mqtt_wss_port, 0)
        add_if(dict, mqtt_ws, 'serviceMqttWebSocketEnabled')
        add_if(dict, mqtt_ws_port, 'serviceMqttWebSocketListenPort', mqtt_ws_port, 0)
        add_if(dict, rest_max_conn, 'serviceRestIncomingMaxConnectionCount', rest_max_conn, 0)
        add_if(dict, rest_plaintext, 'serviceRestIncomingPlainTextEnabled')
        add_if(dict, rest_port, 'serviceRestIncomingPlainTextListenPort', rest_port, 0)
        add_if(dict, rest_tls, 'serviceRestIncomingTlsEnabled')
        add_if(dict, rest_tls_port, 'serviceRestIncomingTlsListenPort', rest_tls_port, 0)
        add_if(dict, rest__gateway_mode, 'serviceRestMode', 'gateway', 'messaging')
        add_if(dict, rest_max_outgoing_conn, 'serviceRestOutgoingMaxConnectionCount', rest_max_outgoing_conn, 0)
        add_if(dict, smf_max_conn, 'serviceSmfMaxConnectionCount', smf_max_conn, 0)
        add_if(dict, smf_plaintext, 'serviceSmfPlainTextEnabled')
        add_if(dict, smf_tls, 'serviceSmfTlsEnabled')
        add_if(dict, web_max_conn, 'serviceWebMaxConnectionCount', web_max_conn, 0)
        add_if(dict, web_plaintext, 'serviceWebPlainTextEnabled')
        add_if(dict, web_tls, 'serviceWebTlsEnabled')
        add_if(dict, tls_downgrade, 'tlsAllowDowngradeToPlainTextEnabled')


        rest_mgr = RestMgr(kwargs)
        if is_post:
            rest_mgr.post(suburl, dict, False)
        else:
            rest_mgr.patch(suburl, name, dict, False)
    except Exception as ex:
        logger.error(f"upsert Exception: {ex}")




@msgvpn.command()
@click.argument("name")
@click.option('--alias', help='')
@click.option('--basic-authn/--no-basic-authn',  help='')
@click.option('--basic-authn-profile', help='')
@click.option('--basic-radius-domain', help='')
@click.option('--basic-authn-type', help='')
@click.option('--enable-cert-api-username/--no-enable-cert-api-username',  help='')
@click.option('--enable-cert-authn/--no-enable-cert-authn',  help='')
@click.option('--max-chain-depth', type=int,  help='')
@click.option('--cert-revoke-check', type=click.Choice(['allow-all', 'allow-unknown', 'allow-valid']),  help='')
@click.option('--cert-user-source',type=click.Choice(['common-name','subject-alternate-name-msupn']),  help='')
@click.option('--cert-date-check/--no-cert-date-check',  help='')
@click.option('--enable-kerberos-api-username/--no-enable-kerberos-api-username',   help='')
@click.option('--enable-kereberos-authn/--no-enable-kereberos-authn',   help='')
@click.option('--default-oauth-provider', help='')
@click.option('--enable-oauth/--no-enable-oauth',  help='')
@click.option('--ldap-attribute-name', help='')
@click.option('--enable-trim-ldap-domain/--no-enable-trim-ldap-domain',   help='')
@click.option('--ldap-authz-profile', help='')
@click.option('--authz-type', type=click.Choice(['ldap','internal']),   help='')
@click.option('--enable-bridge-cn-check/--no-enable-bridge-cn-check',  help='')
@click.option('--max-chain-depth-bridge', type=int,  help='')
@click.option('--cert-date-check-bridge/--no-cert-date-check-bridge',  help='')
@click.option('--enable-cache-mgmt/--no-enable-cache-mgmt',  help='')
@click.option('--dmr/--no-dmr',  help='')
@click.option('--enable/--no-enable',   help='')
@click.option('--event-log-tag', help='')
@click.option('--publish-client-events/--no-publish-client-events',  help='')
@click.option('--publish-vpn-event/--no-publish-vpn-event',  help='')
@click.option('--event-subscription-mode',type=click.Choice(['off', 'on-with-format-v2']),  help='')
@click.option('--enable-mqtt-topics/--no-enable-mqtt-topics',  help='')
@click.option('--enable-smf-topics/--no-enable-smf-topics',  help='')
@click.option('--export-subscriptions/--no-export-subscriptions',  help='')
@click.option('--jndi/--no-jndi',  help='')
@click.option('--max-connections', type=int, help='')
@click.option('--max-egress-flows', type=int,  help='')
@click.option('--max-endpoints',  type=int,  help='')
@click.option('--max-ingress-flows',  type=int,  help='')
@click.option('--max-spool', type=int,  help='')
@click.option('--max-subscriptions', help='')
@click.option('--max-tx-sessions', type=int, help='')
@click.option('--max-tx', type=int, help='')
@click.option('--mqtt-retain-mem', type=int,  help='')
@click.option('--ip-version', type=click.Choice(['ipv4', 'ipv6']), help='')
@click.option('--replicate-ack-interval', type=int,  help='')
@click.option('--bridge-username', help='')
@click.option('--bridge-password', help='')
@click.option('--bridge-cert-content', help='')
@click.option('--bridge-cert-password', help='')
@click.option('--replicate-authn', type=click.Choice(['basic', 'client-certificate']), help='')
@click.option('--replicate-compress/--no-replicate-compress',  help='')
@click.option('--replicate-window-size',  type=int,  help='')
@click.option('--replicate-retry-delay',  type=int,  help='')
@click.option('--tls-replicate/--no-tls-replicate',  help='')
@click.option('--replicate-cp', help='')
@click.option('--replicate/--no-replicate',   help='')
@click.option('--replicate-queue', type=click.Choice(['fail-on-existing-queue', 'force-use-existing-queue', 'force-recreate-queue']), help='')
@click.option('--replicate-max-spool', type=int,  help='')
@click.option('--replicate-reject-on-discard/--no-replicate-reject-on-discard',  help='')
@click.option('--reject-on-async/--no-reject-on-async',  help='')
@click.option('--replicate-role', type=click.Choice(['active', 'standby']),  help='')
@click.option('--replicate-tx-mode', type=click.Choice(['sync', 'async']),  help='')
@click.option('--rest-cn-check/--no-rest-cn-check',  help='')
@click.option('--rest-cert-max-depth', type=int,  help='')
@click.option('--rest-cert-date-check/--no-rest-cert-date-check',  help='')
@click.option('--msgbus-client-admin/--no-msgbus-client-admin',  help='')
@click.option('--msgbus-admin-cache/--no-msgbus-admin-cache',  help='')
@click.option('--msgbus-admin/--no-msgbus-admin',  help='')
@click.option('--msgbus/--no-msgbus',  help='')
# @click.option('--msgbus-legacy/--no-msgbus-legacy',  help='')
@click.option('--msgbus-show/--no-msgbus-show',  help='')
@click.option('--amqp-max-conn',  type=int,  help='')
@click.option('--amqp-plaintext/--no-amqp-plaintext',   help='')
@click.option('--amqp-port',  type=int,  help='')
@click.option('--amqp-tls/--no-amqp-tls',   help='')
@click.option('--amqp-tls-port', type=int,  help='')
@click.option('--mqtt-max-conn', type=int, help='')
@click.option('--mqtt-plaintext/--no-mqtt-plaintext',   help='')
@click.option('--mqtt-port', type=int,  help='')
@click.option('--mqtt-tls/--no-mqtt-tls',   help='')
@click.option('--mqtt-tls-port', type=int,  help='')
@click.option('--mqtt-wss/--no-mqtt-wss',   help='')
@click.option('--mqtt-wss-port', type=int,  help='')
@click.option('--mqtt-ws/--no-mqtt-ws',   help='')
@click.option('--mqtt-ws-port', type=int,  help='')
@click.option('--rest-max-conn', type=int, help='')
@click.option('--rest-plaintext/--no-rest-plaintext',   help='')
@click.option('--rest-port', type=int,  help='')
@click.option('--rest-tls/--no-rest-tls',   help='')
@click.option('--rest-tls-port', type=int,  help='')
@click.option('--rest--gateway-mode/--no-rest--gateway-mode',  help='')
@click.option('--rest-max-outgoing-conn', type=int,  help='')
@click.option('--smf-max-conn', type=int, help='')
@click.option('--smf-plaintext/--no-smf-plaintext',  help='')
@click.option('--smf-tls/--no-smf-tls',  help='')
@click.option('--web-max-conn', type=int, help='')
@click.option('--web-plaintext/--no-web-plaintext',  help='')
@click.option('--web-tls/--no-web-tls',  help='')
@click.option('--tls-downgrade/--no-tls-downgrade',  help='')
@my_global_options
def update(name,
           alias, basic_authn, basic_authn_profile, basic_radius_domain, basic_authn_type,
           enable_cert_api_username, enable_cert_authn, max_chain_depth, cert_revoke_check, cert_user_source,
           cert_date_check, enable_kerberos_api_username, enable_kereberos_authn, default_oauth_provider, enable_oauth,
           ldap_attribute_name, enable_trim_ldap_domain, ldap_authz_profile, authz_type,
           enable_bridge_cn_check, max_chain_depth_bridge, cert_date_check_bridge, enable_cache_mgmt,
           dmr, enable, event_log_tag, publish_client_events, publish_vpn_event,
           event_subscription_mode, enable_mqtt_topics, enable_smf_topics, export_subscriptions, jndi,
           max_connections, max_egress_flows, max_endpoints, max_ingress_flows, max_spool, max_subscriptions,
           max_tx_sessions, max_tx, mqtt_retain_mem, ip_version, replicate_ack_interval,
           bridge_username, bridge_password, bridge_cert_content, bridge_cert_password, replicate_authn,
           replicate_compress, replicate_window_size, replicate_retry_delay, tls_replicate, replicate_cp,
           replicate, replicate_queue, replicate_max_spool, replicate_reject_on_discard, reject_on_async,
           replicate_role, replicate_tx_mode, rest_cn_check, rest_cert_max_depth,
           rest_cert_date_check, msgbus_client_admin, msgbus_admin_cache, msgbus_admin,
           msgbus, msgbus_show, amqp_max_conn, amqp_plaintext, amqp_port,
           amqp_tls, amqp_tls_port, mqtt_max_conn, mqtt_plaintext, mqtt_port, mqtt_tls, mqtt_tls_port,
           mqtt_wss, mqtt_wss_port, mqtt_ws, mqtt_ws_port, rest_max_conn,
           rest_plaintext, rest_port, rest_tls, rest_tls_port, rest__gateway_mode,
           rest_max_outgoing_conn, smf_max_conn, smf_plaintext, smf_tls, web_max_conn,
           web_plaintext, web_tls, tls_downgrade,
           **kwargs):
    upsert(False, name,
           alias, basic_authn, basic_authn_profile, basic_radius_domain, basic_authn_type,
           enable_cert_api_username, enable_cert_authn, max_chain_depth, cert_revoke_check, cert_user_source,
           cert_date_check, enable_kerberos_api_username, enable_kereberos_authn, default_oauth_provider, enable_oauth,
           ldap_attribute_name, enable_trim_ldap_domain, ldap_authz_profile, authz_type,
           enable_bridge_cn_check, max_chain_depth_bridge, cert_date_check_bridge, enable_cache_mgmt,
           dmr, enable, event_log_tag, publish_client_events, publish_vpn_event,
           event_subscription_mode, enable_mqtt_topics, enable_smf_topics, export_subscriptions, jndi,
           max_connections, max_egress_flows, max_endpoints, max_ingress_flows, max_spool, max_subscriptions,
           max_tx_sessions, max_tx, mqtt_retain_mem, ip_version, replicate_ack_interval,
           bridge_username, bridge_password, bridge_cert_content, bridge_cert_password, replicate_authn,
           replicate_compress, replicate_window_size, replicate_retry_delay, tls_replicate, replicate_cp,
           replicate, replicate_queue, replicate_max_spool, replicate_reject_on_discard, reject_on_async,
           replicate_role, replicate_tx_mode, rest_cn_check, rest_cert_max_depth,
           rest_cert_date_check, msgbus_client_admin, msgbus_admin_cache, msgbus_admin,
           msgbus, msgbus_show, amqp_max_conn, amqp_plaintext, amqp_port,
           amqp_tls, amqp_tls_port, mqtt_max_conn, mqtt_plaintext, mqtt_port, mqtt_tls, mqtt_tls_port,
           mqtt_wss, mqtt_wss_port, mqtt_ws, mqtt_ws_port, rest_max_conn,
           rest_plaintext, rest_port, rest_tls, rest_tls_port, rest__gateway_mode,
           rest_max_outgoing_conn, smf_max_conn, smf_plaintext, smf_tls, web_max_conn,
           web_plaintext, web_tls, tls_downgrade,
           **kwargs)




@msgvpn.command()
@click.argument("vpnname")
@my_global_options
def remove(vpnname, **kwargs):
    rest_mgr = RestMgr(kwargs)
    rest_mgr.delete(suburl, vpnname, False)


@msgvpn.command()
@my_global_options
def list(**kwargs):
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.get(f'{suburl}?select=msgVpnName', None, False)


@msgvpn.command()
@my_global_options
@click.argument("vpnname")
def show(vpnname, **kwargs):
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.get(suburl, vpnname, False)

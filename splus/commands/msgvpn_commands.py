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
@click.option('--alias',
              help='The name of another Message VPN which this Message VPN is an alias for. When this Message VPN is enabled, the alias has no effect. When this Message VPN is disabled, Clients (but not Bridges and routing Links) logging into this Message VPN are automatically logged in to the other Message VPN, and authentication and authorization take place in the context of the other Message VPN.')
@click.option('--basic-authn/--no-basic-authn', default=True, show_default=True,
              help='Enable or disable basic authentication for clients connecting to the Message VPN')
@click.option('--basic-authn-profile', default='default', show_default=True,
              help='Name of the RADIUS or LDAP Profile to use for basic authentication')
@click.option('--basic-radius-domain', default='', show_default=True,
              help='RADIUS domain to use for basic authentication.')
@click.option('--basic-authn-type', type=click.Choice(['internal', 'ldap', 'radius', 'none']),
              default='none', show_default=True,
              help='The type of basic authentication to use for clients connecting to the Message VPN.')
@click.option('--enable-cert-api-username/--no-enable-cert-api-username',
              default=True, show_default=True,
              help='Allow a client to specify a Client Username via the API connect method. When disabled, the certificate CN (Common Name) is always used')
@click.option('--enable-cert-authn/--no-enable-cert-authn',
              default=False, show_default=True,
              help='Manage client certificate authentication')
@click.option('--max-chain-depth', default=3, show_default=True,
              help='Maximum depth for a client certificate chain. The depth of a chain is defined as the number of signing CA certificates that are present in the chain back to a trusted self-signed root CA certificate')
@click.option('--cert-revoke-check', type=click.Choice(['allow-all', 'allow-unknown', 'allow-valid']),
              default='allow-valid', show_default=True,
              help='Desired behavior for client certificate revocation checking')
@click.option('--is-cert-user-source-cn/--no-is-cert-source-cn',
              default=True, show_default=True,
              help='Control if the username is derived from Common Name or Alternate Name in the cert')
@click.option('--cert-date-check/--no-cert-date-check',
              default=True, show_default=True,
              help='Manage validation of dates in the client certificate')
@click.option('--enable-kerberos-api-username/--no-enable-kerberos-api-username',
              default=False, show_default=True,
              help='Allow a client to specify a Client Username via the API connect method. When disabled, the Kerberos Principal name is always used')
@click.option('--enable-kereberos-authn/--no-enable-kereberos-authn', default=False, show_default=True,
              help='Manage Kerberos authentication')
@click.option('--default-oauth-provider',
              help='Name of the provider to use when the client does not supply a provider name')
@click.option('--enable-oauth/--no-enable-oauth', default=False, show_default=True,
              help='Manage OAuth authentication')
@click.option('--ldap-attribute-name', default='memberOf', show_default=True,
              help='Name of the attribute that is retrieved from the LDAP server as part of the LDAP search when authorizing a client connecting to the Message VPN')
@click.option('--trim-ldap-domain/--no-trim-ldap-domain', default=False, show_default=True,
              help='Manage client-username domain trimming for LDAP lookups of client connections. When enabled, the value of $CLIENT_USERNAME (when used for searching) will be truncated at the first occurance of the @ character. For example, if the client-username is in the form of an email address, then the domain portion will be removed')
@click.option('--ldap-authz-profile',
              help='LDAP Profile to be used for client authorization')
@click.option('--authz-type', type=click.Choice(['ldap','internal']), default='internal', show_default=True,
              help='Authorization type to use for clients connecting to the Message VPN.')
@click.option('--enable-bridge-cn-check/--no-enable-bridge-cn-check', default=True, show_default=True,
              help='Enable or disable validation of the Common Name (CN) in the server certificate from the remote broker. If enabled, the Common Name is checked against the list of Trusted Common Names configured for the Bridge')
@click.option('--max-chain-depth-bridge', default=3, show_default=True,
              help='Maximum depth of server certificate chain, defined as the number of signing CA certificates that are present in the chain back to a trusted self-signed root CA certificate')
@click.option('--cert-date-check-bridge/--no-cert-date-check-bridge', default=True, show_default=True,
              help='Manage validation of dates in the client certificate')
@click.option('--enable-cache-mgmt/--no-enable-cache-mgmt', default=True, show_default=True,
              help='Control managing of cache instances over the message bus')
@click.option('--dmr/--no-dmr', default=True, show_default=True,
              help='Enable or disable Dynamic Message Routing (DMR)')
@click.option('--enable/--no-enable', default=False, show_default=True,
              help='Enable or disable the Message VPN')
@click.option('--event-log-tag', help='A prefix applied to all published Events in the Message VPN')
@click.option('--publish-client-events/--no-publish-client-events',
              default=False, show_default=True,
              help='Enable or disable Client level Event message publishing')
@click.option('--publish-vpn-event/--no-publish-vpn-event',
              default=True, show_default=True,
              help='Enable or disable Message VPN level Event message publishing')
@click.option('--event-subscription-mode',type=click.Choice(['off', 'on-with-format-v2']),
              show_default=True,
              help='Subscription level Event message publishing mode')
@click.option('--enable-mqtt-topics/--no-enable-mqtt-topics', default=False, show_default=True,
              help='Enable or disable Event publish topics in MQTT format')
@click.option('--enable-smf-topics/--no-enable-smf-topics', default=True, show_default=True,
              help='Enable or disable Event publish topics in SMF format.')
@click.option('--export-subscriptions/--no-export-subscriptions', default=False, show_default=True,
              help='Manage  export of subscriptions in the Message VPN to other routers in the network over Neighbor links')
@click.option('--jndi/--no-jndi', default=False, show_default=True,
              help='Enable or disable JNDI access for clients')
@click.option('--max-connections', type=int, help='Maximum number of client connections')
@click.option('--max-egress-flows', default=16000, show_default=True,
              help='Maximum number of transmit flows that can be created')
@click.option('--max-endpoints', default=16000, show_default=True,
              help='Maximum number of Queues and Topic Endpoints that can be created')
@click.option('--max-ingress-flows', default=16000, show_default=True,
              help='Maximum number of receive flows that can be created')
@click.option('--max-spool', default=0, show_default=True, help='Maximum message spool usage, in megabytes (MB)')
@click.option('--max-subscriptions', type=int, help='Maximum number of local client subscriptions (both primary and backup) that can be added')
@click.option('--max-tx-sessions', type=int, help='Maximum number of transacted sessions that can be created')
@click.option('--max-tx', type=int, help='Maximum number of transactions that can be created')
@click.option('--mqtt-retain-mem', default=-1, show_default=True,
              help='Maximum total memory usage of the MQTT Retain feature, in MB. If the maximum memory is reached, any arriving retain messages that require more memory are discarded. A value of -1 indicates that the memory is bounded only by the global max memory limit. A value of 0 prevents MQTT Retain from becoming operational')
@click.option('--ip-version', type=click.Choice(['ipv4', 'ipv6']),
              help='IP version to use if DNS lookup contains both an IPv4 and IPv6 address')
@click.option('--replicate-ack-interval', default=20, show_default=True,
              help='Acknowledgement (ACK) propagation interval for the replication Bridge, in number of replicated messages')
@click.option('--bridge-username', help='Client Username the replication Bridge uses to login to the remote Message VPN')
@click.option('--bridge-password', help='Password for the Client Username')
@click.option('--bridge-cert-content', help='PEM formatted content for the client certificate used by this bridge to login to the Remote Message VPN. It must consist of a private key and between one and three certificates comprising the certificate trust chain')
@click.option('--bridge-cert-password', help='Password for the client certificate')
@click.option('--replicate-authn', type=click.Choice(['basic', 'client-certificate']),
              help='Authentication scheme for the replication Bridge in the Message VPN')
@click.option('--replicate-compress/--no-replicate-compress', default=False, show_default=True,
              help='Control the use of compression for the replication bridge')
@click.option('--replicate-window-size', default=255, show_default=True,
              help='Size of the window used for guaranteed messages published to the replication Bridge, in messages')
@click.option('--replicate-retry-delay', default=3, show_default=True,
              help='Number of seconds that must pass before retrying the replication Bridge connection')
@click.option('--tls-replicate/--no-tls-replicate', default=False, show_default=True,
              help='Enable or disable use of encryption (TLS) for the replication Bridge connection')
@click.option('--replicate-cp', default='#client-profile', show_default=True,
              help='Client Profile for the unidirectional replication Bridge in the Message VPN. It is used only for the TCP parameters')
@click.option('--replicate/--no-replicate', default=False, show_default=True,
              help='Enable or disable replication for the Message VPN')
@click.option('--replicate-queue', type=click.Choice(['fail-on-existing-queue', 'force-use-existing-queue', 'force-recreate-queue']),
              help='Behavior to take when enabling replication for the Message VPN, depending on the existence of the replication Queue')
@click.option('--replicate-max-spool', default=60000, show_default=True,
              help='Maximum message spool usage by the replication Bridge local Queue (quota), in megabytes')
@click.option('--replicate-reject-on-discard/--no-replicate-reject-on-discard', default=True, show_default=True,
              help='Control whether messages discarded on the replication Bridge local Queue are rejected back to the sender')
@click.option('--reject-on-async/--no-reject-on-async', default=False, show_default=True,
              help='Control whether guaranteed messages published to synchronously replicated Topics are rejected back to the sender when synchronous replication becomes ineligible')
@click.option('--replicate-role', type=click.Choice(['active', 'standby']), default='active', show_default=True,
              help='Replication role for the Message VPN')
@click.option('--replicate-tx-mode', type=click.Choice(['sync', 'async']), default='sync', show_default=True,
              help='Transaction replication mode for all transactions within the Message VPN. Changing this value during operation will not affect existing transactions; it is only used upon starting a transaction')
@click.option('--rest-cn-check/--no-rest-cn-check', default=True, show_default=True,
              help='Control validation of the Common Name (CN) in the server certificate from the remote REST Consumer against the list of Trusted CNs configured for the REST Consumer')
@click.option('--rest-cert-max-depth', default=3, show_default=True,
              help='Maximum depth for a REST Consumer server certificate chain, defined as the number of signing CA certificates that are present in the chain back to a trusted self-signed root CA certificate')
@click.option('--rest-cert-date-check/--no-rest-cert-date-check', default=True, show_default=True,
              help='Control validation of dates in the REST Consumer server certificate')
@click.option('--msgbus-client-admin/--no-msgbus-client-admin', default=False, show_default=True,
              help='Enable or disable "admin client" SEMP over the message bus commands')
@click.option('--msgbus-admin-cache/--no-msgbus-admin-cache', default=False, show_default=True,
              help='Enable or disable "admin distributed-cache" SEMP over the message bus commands')
@click.option('--msgbus-admin/--no-msgbus-admin', default=False, show_default=True,
              help='Enable or disable "admin" SEMP over the message bus commands for the current Message VPN')
@click.option('--msgbus/--no-msgbus', default=True, show_default=True,
              help='Enable or disable SEMP over the message bus')
# @click.option('--msgbus-legacy/--no-msgbus-legacy', default=True, show_default=True,
#             help='Enable or disable "legacy-show-clear" SEMP over the message bus commands (that is, SEMP show and administration requests published to the topic "#P2P/[router name]/#client/SEMP") ')
@click.option('--msgbus-show/--no-msgbus-show', default=False, show_default=True,
              help='Enable or disable "show" SEMP over the message bus command')
@click.option('--amqp-max-conn', type=int,
              help='Maximum number of AMQP client connections that can be simultaneously connected')
@click.option('--amqp-plaintext/--no-amqp-plaintext', default=False, show_default=True,
              help='Enable or disable the plain-text AMQP service in the Message VPN')
@click.option('--amqp-port', type=int,
              help='Port number for plain-text AMQP clients. Port must be unique across the message backbone')
@click.option('--amqp-tls/--no-amqp-tls', default=False, show_default=True,
              help='Enable or disable the use of encryption (TLS) for the AMQP service')
@click.option('--amqp-tls-port', type=int,
              help='Port number for AMQP clients that connect over TLS. Port must be unique across the message backbone')
@click.option('--mqtt-max-conn', type=int, help='Maximum number of MQTT client connections that can be simultaneously connected')
@click.option('--mqtt-plaintext/--no-mqtt-plaintext', default=False, show_default=True,
              help='Enable or disable the plain-text MQTT service in the Message VPN')
@click.option('--mqtt-port', type=int,
              help='Port number for plain-text MQTT clients. Port must be unique across the message backbone')
@click.option('--mqtt-tls/--no-mqtt-tls', default=False, show_default=True,
              help='Enable or disable the use of encryption (TLS) for the MQTT service')
@click.option('--mqtt-tls-port', type=int,
              help='Port number for MQTT clients that connect over TLS. Port must be unique across the message backbone')
@click.option('--mqtt-wss/--no-mqtt-wss', default=False, show_default=True,
              help='Enable or disable the use of WebSocket over TLS for the MQTT service')
@click.option('--mqtt-wss-port', type=int,
              help='Port number for MQTT clients that connect using WebSocket over TLS. Port must be unique across the message backbone')
@click.option('--mqtt-ws/--no-mqtt-ws', default=False, show_default=True,
              help='Enable or disable the use of WebSocket for the MQTT service')
@click.option('--mqtt-ws-port', type=int,
              help='Port number for AMQP clients that connect over TLS. Port must be unique across the message backbone')
@click.option('--rest-max-conn', type=int,
              help='Maximum number of REST incoming client connections that can be simultaneously connected')
@click.option('--rest-plaintext/--no-rest-plaintext', default=False, show_default=True,
              help='Enable or disable the plain-text REST service for incoming clients')
@click.option('--rest-port', type=int,
              help='Port number for REST clients. Port must be unique across the message backbone')
@click.option('--rest-tls/--no-rest-tls', default=False, show_default=True,
              help='Enable or disable the use of encryption (TLS) for the REST service')
@click.option('--rest-tls-port', type=int,
              help='Port number for REST clients that connect over TLS. Port must be unique across the message backbone')
@click.option('--rest-gateway-mode/--no-rest--gateway-mode', default=False, show_default=True,
              help='Enable gateway mode or let the message VPN function in the default messaging mode')
@click.option('--rest-max-outgoing-conn', type=int,
              help='Maximum number of REST Consumer (outgoing) client connections')
@click.option('--smf-max-conn', type=int,
              help='Maximum number of SMF client connections that can be simultaneously connected')
@click.option('--smf-plaintext/--no-smf-plaintext', default=True, show_default=True,
              help='Enable or disable the plain-text SMF service')
@click.option('--smf-tls/--no-smf-tls', default=True, show_default=True,
              help='Enable or disable the use of encryption (TLS) for the SMF service')
@click.option('--web-max-conn', type=int,
              help='Maximum number of Web Transport client connections that can be simultaneously connected')
@click.option('--web-plaintext/--no-web-plaintext', default=True, show_default=True,
              help='Enable or disable the plain-text Web Transport service')
@click.option('--web-tls/--no-web-tls', default=True, show_default=True,
              help='Enable or disable the use of encryption (TLS) for the Web Transport service')
@click.option('--tls-downgrade/--no-tls-downgrade', default=True, show_default=True,
              help='Enable or disable the allowing of TLS SMF clients to downgrade their connections to plain-text connections')
@my_global_options
def create(name,
           alias, basic_authn, basic_authn_profile, basic_radius_domain, basic_authn_type,
           enable_cert_api_username, enable_cert_authn, max_chain_depth, cert_revoke_check, is_cert_user_source_cn,
           cert_date_check, enable_kerberos_api_username, enable_kereberos_authn, default_oauth_provider, enable_oauth,
           ldap_attribute_name, trim_ldap_domain, ldap_authz_profile, authz_type,
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
           enable_cert_api_username, enable_cert_authn, max_chain_depth, cert_revoke_check, is_cert_user_source_cn,
           cert_date_check, enable_kerberos_api_username, enable_kereberos_authn, default_oauth_provider, enable_oauth,
           ldap_attribute_name, trim_ldap_domain, ldap_authz_profile, authz_type,
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
 enable_cert_api_username, enable_cert_authn, max_chain_depth, cert_revoke_check, is_cert_user_source_cn,
 cert_date_check, enable_kerberos_api_username, enable_kereberos_authn, default_oauth_provider, enable_oauth,
 ldap_attribute_name, trim_ldap_domain, ldap_authz_profile, authz_type,
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

        if not enable_mqtt_topics:
            enable_smf_topics = True

        add_if(dict, alias, 'alias', alias)
        add_if(dict, basic_authn, 'authenticationBasicEnabled')
        add_if(dict, basic_authn_profile, 'authenticationBasicProfileName', basic_authn_profile)
        add_if(dict, basic_radius_domain, 'authenticationBasicRadiusDomain', basic_radius_domain, '')
        add_if(dict, basic_authn_type, 'authenticationBasicType', basic_authn_type)
        add_if(dict, enable_cert_api_username, 'authenticationClientCertAllowApiProvidedUsernameEnabled')
        add_if(dict, enable_cert_authn, 'authenticationClientCertEnabled')
        add_if(dict, max_chain_depth, 'authenticationClientCertMaxChainDepth', max_chain_depth, 0)
        add_if(dict, cert_revoke_check, 'authenticationClientCertRevocationCheckMode', cert_revoke_check)
        add_if(dict, is_cert_user_source_cn, 'authenticationClientCertUsernameSource', 'common-name',
               'subject-alternate-name-msupn')
        add_if(dict, cert_date_check, 'authenticationClientCertValidateDateEnabled')
        add_if(dict, enable_kerberos_api_username, 'authenticationKerberosAllowApiProvidedUsernameEnabled')
        add_if(dict, enable_kereberos_authn, 'authenticationKerberosEnabled')
        add_if(dict, default_oauth_provider, 'authenticationOauthDefaultProviderName', default_oauth_provider)
        add_if(dict, enable_oauth, 'authenticationOauthEnabled')
        add_if(dict, ldap_attribute_name, 'authorizationLdapGroupMembershipAttributeName', ldap_attribute_name)
        add_if(dict, trim_ldap_domain, 'authorizationLdapTrimClientUsernameDomainEnabled')
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
@click.option('--alias',
              help='The name of another Message VPN which this Message VPN is an alias for. When this Message VPN is enabled, the alias has no effect. When this Message VPN is disabled, Clients (but not Bridges and routing Links) logging into this Message VPN are automatically logged in to the other Message VPN, and authentication and authorization take place in the context of the other Message VPN.')
@click.option('--basic-authn/--no-basic-authn', 
              help='Enable or disable basic authentication for clients connecting to the Message VPN')
@click.option('--basic-authn-profile',
              help='Name of the RADIUS or LDAP Profile to use for basic authentication')
@click.option('--basic-radius-domain',
              help='RADIUS domain to use for basic authentication.')
@click.option('--basic-authn-type', type=click.Choice(['internal', 'ldap', 'radius', 'none']),
              help='The type of basic authentication to use for clients connecting to the Message VPN.')
@click.option('--enable-cert-api-username/--no-enable-cert-api-username',
              help='Allow a client to specify a Client Username via the API connect method. When disabled, the certificate CN (Common Name) is always used')
@click.option('--enable-cert-authn/--no-enable-cert-authn',
              help='Manage client certificate authentication')
@click.option('--max-chain-depth', type=int,
              help='Maximum depth for a client certificate chain. The depth of a chain is defined as the number of signing CA certificates that are present in the chain back to a trusted self-signed root CA certificate')
@click.option('--cert-revoke-check', type=click.Choice(['allow-all', 'allow-unknown', 'allow-valid']),
              help='Desired behavior for client certificate revocation checking')
@click.option('--is-cert-user-source-cn/--no-is-cert-source-cn',
              help='Control if the username is derived from Common Name or Alternate Name in the cert')
@click.option('--cert-date-check/--no-cert-date-check',
              help='Manage validation of dates in the client certificate')
@click.option('--enable-kerberos-api-username/--no-enable-kerberos-api-username',
              help='Allow a client to specify a Client Username via the API connect method. When disabled, the Kerberos Principal name is always used')
@click.option('--enable-kereberos-authn/--no-enable-kereberos-authn', 
              help='Manage Kerberos authentication')
@click.option('--default-oauth-provider',
              help='Name of the provider to use when the client does not supply a provider name')
@click.option('--enable-oauth/--no-enable-oauth', 
              help='Manage OAuth authentication')
@click.option('--ldap-attribute-name',
              help='Name of the attribute that is retrieved from the LDAP server as part of the LDAP search when authorizing a client connecting to the Message VPN')
@click.option('--trim-ldap-domain/--no-trim-ldap-domain', 
              help='Manage client-username domain trimming for LDAP lookups of client connections. When enabled, the value of $CLIENT_USERNAME (when used for searching) will be truncated at the first occurance of the @ character. For example, if the client-username is in the form of an email address, then the domain portion will be removed')
@click.option('--ldap-authz-profile',
              help='LDAP Profile to be used for client authorization')
@click.option('--authz-type', type=click.Choice(['ldap','internal']),
              help='Authorization type to use for clients connecting to the Message VPN.')
@click.option('--enable-bridge-cn-check/--no-enable-bridge-cn-check', 
              help='Enable or disable validation of the Common Name (CN) in the server certificate from the remote broker. If enabled, the Common Name is checked against the list of Trusted Common Names configured for the Bridge')
@click.option('--max-chain-depth-bridge', type=int,
              help='Maximum depth of server certificate chain, defined as the number of signing CA certificates that are present in the chain back to a trusted self-signed root CA certificate')
@click.option('--cert-date-check-bridge/--no-cert-date-check-bridge', 
              help='Manage validation of dates in the client certificate')
@click.option('--enable-cache-mgmt/--no-enable-cache-mgmt', 
              help='Control managing of cache instances over the message bus')
@click.option('--dmr/--no-dmr', 
              help='Enable or disable Dynamic Message Routing (DMR)')
@click.option('--enable/--no-enable', 
              help='Enable or disable the Message VPN')
@click.option('--event-log-tag', help='A prefix applied to all published Events in the Message VPN')
@click.option('--publish-client-events/--no-publish-client-events',
              help='Enable or disable Client level Event message publishing')
@click.option('--publish-vpn-event/--no-publish-vpn-event',
              help='Enable or disable Message VPN level Event message publishing')
@click.option('--event-subscription-mode',type=click.Choice(['off', 'on-with-format-v2']),
              help='Subscription level Event message publishing mode')
@click.option('--enable-mqtt-topics/--no-enable-mqtt-topics', 
              help='Enable or disable Event publish topics in MQTT format')
@click.option('--enable-smf-topics/--no-enable-smf-topics', 
              help='Enable or disable Event publish topics in SMF format.')
@click.option('--export-subscriptions/--no-export-subscriptions', 
              help='Manage  export of subscriptions in the Message VPN to other routers in the network over Neighbor links')
@click.option('--jndi/--no-jndi', 
              help='Enable or disable JNDI access for clients')
@click.option('--max-connections', type=int, help='Maximum number of client connections')
@click.option('--max-egress-flows', type=int,
              help='Maximum number of transmit flows that can be created')
@click.option('--max-endpoints', type=int,
              help='Maximum number of Queues and Topic Endpoints that can be created')
@click.option('--max-ingress-flows', type=int,
              help='Maximum number of receive flows that can be created')
@click.option('--max-spool', type=int, help='Maximum message spool usage, in megabytes (MB)')
@click.option('--max-subscriptions', type=int, help='Maximum number of local client subscriptions (both primary and backup) that can be added')
@click.option('--max-tx-sessions', type=int, help='Maximum number of transacted sessions that can be created')
@click.option('--max-tx', type=int, help='Maximum number of transactions that can be created')
@click.option('--mqtt-retain-mem', type=int,
              help='Maximum total memory usage of the MQTT Retain feature, in MB. If the maximum memory is reached, any arriving retain messages that require more memory are discarded. A value of -1 indicates that the memory is bounded only by the global max memory limit. A value of 0 prevents MQTT Retain from becoming operational')
@click.option('--ip-version', type=click.Choice(['ipv4', 'ipv6']),
              help='IP version to use if DNS lookup contains both an IPv4 and IPv6 address')
@click.option('--replicate-ack-interval', type=int,
              help='Acknowledgement (ACK) propagation interval for the replication Bridge, in number of replicated messages')
@click.option('--bridge-username', help='Client Username the replication Bridge uses to login to the remote Message VPN')
@click.option('--bridge-password', help='Password for the Client Username')
@click.option('--bridge-cert-content', help='PEM formatted content for the client certificate used by this bridge to login to the Remote Message VPN. It must consist of a private key and between one and three certificates comprising the certificate trust chain')
@click.option('--bridge-cert-password', help='Password for the client certificate')
@click.option('--replicate-authn', type=click.Choice(['basic', 'client-certificate']),
              help='Authentication scheme for the replication Bridge in the Message VPN')
@click.option('--replicate-compress/--no-replicate-compress', 
              help='Control the use of compression for the replication bridge')
@click.option('--replicate-window-size', type=int,
              help='Size of the window used for guaranteed messages published to the replication Bridge, in messages')
@click.option('--replicate-retry-delay', type=int,
              help='Number of seconds that must pass before retrying the replication Bridge connection')
@click.option('--tls-replicate/--no-tls-replicate', 
              help='Enable or disable use of encryption (TLS) for the replication Bridge connection')
@click.option('--replicate-cp',
              help='Client Profile for the unidirectional replication Bridge in the Message VPN. It is used only for the TCP parameters')
@click.option('--replicate/--no-replicate', 
              help='Enable or disable replication for the Message VPN')
@click.option('--replicate-queue', type=click.Choice(['fail-on-existing-queue', 'force-use-existing-queue', 'force-recreate-queue']),
              help='Behavior to take when enabling replication for the Message VPN, depending on the existence of the replication Queue')
@click.option('--replicate-max-spool', type=int,
              help='Maximum message spool usage by the replication Bridge local Queue (quota), in megabytes')
@click.option('--replicate-reject-on-discard/--no-replicate-reject-on-discard', 
              help='Control whether messages discarded on the replication Bridge local Queue are rejected back to the sender')
@click.option('--reject-on-async/--no-reject-on-async', 
              help='Control whether guaranteed messages published to synchronously replicated Topics are rejected back to the sender when synchronous replication becomes ineligible')
@click.option('--replicate-role', type=click.Choice(['active', 'standby']), default='active', show_default=True,
              help='Replication role for the Message VPN')
@click.option('--replicate-tx-mode', type=click.Choice(['sync', 'async']), default='sync', show_default=True,
              help='Transaction replication mode for all transactions within the Message VPN. Changing this value during operation will not affect existing transactions; it is only used upon starting a transaction')
@click.option('--rest-cn-check/--no-rest-cn-check', 
              help='Control validation of the Common Name (CN) in the server certificate from the remote REST Consumer against the list of Trusted CNs configured for the REST Consumer')
@click.option('--rest-cert-max-depth', type=int,
              help='Maximum depth for a REST Consumer server certificate chain, defined as the number of signing CA certificates that are present in the chain back to a trusted self-signed root CA certificate')
@click.option('--rest-cert-date-check/--no-rest-cert-date-check', 
              help='Control validation of dates in the REST Consumer server certificate')
@click.option('--msgbus-client-admin/--no-msgbus-client-admin', 
              help='Enable or disable "admin client" SEMP over the message bus commands')
@click.option('--msgbus-admin-cache/--no-msgbus-admin-cache', 
              help='Enable or disable "admin distributed-cache" SEMP over the message bus commands')
@click.option('--msgbus-admin/--no-msgbus-admin', 
              help='Enable or disable "admin" SEMP over the message bus commands for the current Message VPN')
@click.option('--msgbus/--no-msgbus', 
              help='Enable or disable SEMP over the message bus')
# @click.option('--msgbus-legacy/--no-msgbus-legacy', 
#             help='Enable or disable "legacy-show-clear" SEMP over the message bus commands (that is, SEMP show and administration requests published to the topic "#P2P/[router name]/#client/SEMP") ')
@click.option('--msgbus-show/--no-msgbus-show', 
              help='Enable or disable "show" SEMP over the message bus command')
@click.option('--amqp-max-conn', type=int,
              help='Maximum number of AMQP client connections that can be simultaneously connected')
@click.option('--amqp-plaintext/--no-amqp-plaintext', 
              help='Enable or disable the plain-text AMQP service in the Message VPN')
@click.option('--amqp-port', type=int,
              help='Port number for plain-text AMQP clients. Port must be unique across the message backbone')
@click.option('--amqp-tls/--no-amqp-tls', 
              help='Enable or disable the use of encryption (TLS) for the AMQP service')
@click.option('--amqp-tls-port', type=int,
              help='Port number for AMQP clients that connect over TLS. Port must be unique across the message backbone')
@click.option('--mqtt-max-conn', type=int, help='Maximum number of MQTT client connections that can be simultaneously connected')
@click.option('--mqtt-plaintext/--no-mqtt-plaintext', 
              help='Enable or disable the plain-text MQTT service in the Message VPN')
@click.option('--mqtt-port', type=int,
              help='Port number for plain-text MQTT clients. Port must be unique across the message backbone')
@click.option('--mqtt-tls/--no-mqtt-tls', 
              help='Enable or disable the use of encryption (TLS) for the MQTT service')
@click.option('--mqtt-tls-port', type=int,
              help='Port number for MQTT clients that connect over TLS. Port must be unique across the message backbone')
@click.option('--mqtt-wss/--no-mqtt-wss', 
              help='Enable or disable the use of WebSocket over TLS for the MQTT service')
@click.option('--mqtt-wss-port', type=int,
              help='Port number for MQTT clients that connect using WebSocket over TLS. Port must be unique across the message backbone')
@click.option('--mqtt-ws/--no-mqtt-ws', 
              help='Enable or disable the use of WebSocket for the MQTT service')
@click.option('--mqtt-ws-port', type=int,
              help='Port number for AMQP clients that connect over TLS. Port must be unique across the message backbone')
@click.option('--rest-max-conn', type=int,
              help='Maximum number of REST incoming client connections that can be simultaneously connected')
@click.option('--rest-plaintext/--no-rest-plaintext', 
              help='Enable or disable the plain-text REST service for incoming clients')
@click.option('--rest-port', type=int,
              help='Port number for REST clients. Port must be unique across the message backbone')
@click.option('--rest-tls/--no-rest-tls', 
              help='Enable or disable the use of encryption (TLS) for the REST service')
@click.option('--rest-tls-port', type=int,
              help='Port number for REST clients that connect over TLS. Port must be unique across the message backbone')
@click.option('--rest-gateway-mode/--no-rest--gateway-mode', 
              help='Enable gateway mode or let the message VPN function in the default messaging mode')
@click.option('--rest-max-outgoing-conn', type=int,
              help='Maximum number of REST Consumer (outgoing) client connections')
@click.option('--smf-max-conn', type=int,
              help='Maximum number of SMF client connections that can be simultaneously connected')
@click.option('--smf-plaintext/--no-smf-plaintext', 
              help='Enable or disable the plain-text SMF service')
@click.option('--smf-tls/--no-smf-tls', 
              help='Enable or disable the use of encryption (TLS) for the SMF service')
@click.option('--web-max-conn', type=int,
              help='Maximum number of Web Transport client connections that can be simultaneously connected')
@click.option('--web-plaintext/--no-web-plaintext', 
              help='Enable or disable the plain-text Web Transport service')
@click.option('--web-tls/--no-web-tls', 
              help='Enable or disable the use of encryption (TLS) for the Web Transport service')
@click.option('--tls-downgrade/--no-tls-downgrade', 
              help='Enable or disable the allowing of TLS SMF clients to downgrade their connections to plain-text connections')
@my_global_options
def update(name,
           alias, basic_authn, basic_authn_profile, basic_radius_domain, basic_authn_type,
           enable_cert_api_username, enable_cert_authn, max_chain_depth, cert_revoke_check, is_cert_user_source_cn,
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

import logging
import click

from common import *
from managers import RestMgr

logger = logging.getLogger(__name__)
suburl = 'queues'

perm_map ={
    'no': 'no-access',
    'ro': 'read-only',
    'rw': 'consume',
    'modify': 'modify-topic',
    'admin': 'delete'
}


@click.group()
def queue():
    '''Manage the queues in the Message VPN, which is configured as the default'''
    pass


@queue.command()
@click.argument("qname")
@click.option('--exclusive/--no-exclusive', default=False, show_default=True,
              help='Access type for delivering messages')
@click.option('--ack-propagation/--no-ack-propagation', default=True, show_default=True,
              help='Propagation of consumer acknowledgements (ACKs) received on the active replication Message VPN to the standby replication Message VPN')
@click.option('--dmq', default='#DEAD_MSG_QUEUE', show_default=True,
              help='Dead Message Queue DMQ')
@click.option('--egress/--no-egress', default=True, show_default=True,
              help='Allow transmission of messages')
@click.option('--ingress/--no-ingress', default=True, show_default=True,
              help='Allow reception of messages')
@click.option('--max-bind', default=10000, show_default=True,
              help='Maximum number of consumer flows that can bind')
@click.option('--max-unacked', default=10000, show_default=True,
              help='Maximum number of messages, per flow,  delivered but not acknowledged')
@click.option('--max-msg-size', default=10000000, show_default=True,
              help='Maximum message size, in bytes')
@click.option('--max-spool', default=6000000, show_default=True,
              help='Maximum spool usage, in Megabytes. 0 only allows spooling of the last message received and disables quota checking')
@click.option('--max-redelivery', default=0, show_default=True,
              help='Maximum number of attempts for redelivery of a message prior to it being discarded or moved to the DMQ. 0 means to retry forever')
@click.option('--ttl', default=0, show_default=True,
              help='Maximum time, in seconds, a message can stay in the Queue when respect-ttl is "true". A message expires when the lesser of the sender assigned time-to-live (TTL) in the message and the max-ttl configured for the queue, is exceeded. A value of 0 disables expiry')
@click.option('--owner', default='', show_default=True,  help='Client Username that owns the Queue and has permission equivalent to "delete"')
@click.option('--perm', type=click.Choice(['no', 'ro', 'rw', 'modify', 'admin'], case_sensitive=True), default='rw', show_default=True,
              help='Permission level for consumers, excluding the owner')
@click.option('--low-priority/--no-low-priority', default=False, show_default=True,
              help='Control the checking of low priority messages against the low-priority-msg-limit. This may only be enabled if reject-on-discard does not have a value of "never".')
@click.option('--low-priority-msg-limit', default=0, show_default=True,
              help='The number of messages of any priority  above which low priority messages are not admitted but higher priority messages are allowed')
@click.option('--reject-on-discard', type=click.Choice(['always', 'never', 'when-queue-enabled'], case_sensitive=True), default='when-queue-enabled', show_default=True,
              help='Determines when to return negative acknowledgements (NACKs) on message discards')
@click.option('--respect-priority/--no-respect-priority', default=False, show_default=True,
              help='When enabled, messages contained in the Queue are delivered in priority order, from 9 (highest) to 0 (lowest). MQTT queues do not support enabling message priority')
@click.option('--respect-ttl/--no-respect-ttl', default=True, show_default=True,
              help='Respect the time-to-live (TTL) for messages and expired messages are discarded or moved to the DMQ')
@my_global_options
def create(qname, exclusive, ack_propagation, dmq, egress, ingress, max_bind, max_unacked, max_msg_size, max_spool,
           max_redelivery, ttl, owner, perm, low_priority, low_priority_msg_limit, reject_on_discard,
           respect_priority, respect_ttl,
           **kwargs):
    '''Create a new queue'''
    upsert(True, qname,
           exclusive, ack_propagation, dmq, egress, ingress, max_bind, max_unacked, max_msg_size, max_spool,
           max_redelivery, ttl, owner, perm, low_priority, low_priority_msg_limit, reject_on_discard,
           respect_priority, respect_ttl,
           **kwargs)



def upsert(is_post, qname,
           exclusive, ack_propagation, dmq, egress, ingress, max_bind, max_unacked, max_msg_size, max_spool,
           max_redelivery, ttl, owner, perm, low_priority, low_priority_msg_limit, reject_on_discard,
           respect_priority, respect_ttl,
           **kwargs):
    # try:
        dict = {}

        add_if(dict, qname, 'queueName', qname)
        add_if(dict, exclusive, 'accessType', 'exclusive', 'non-exclusive')
        add_if(dict, ack_propagation, 'consumerAckPropagationEnabled', ack_propagation)
        add_if(dict, dmq, 'deadMsgQueue', dmq)
        add_if(dict, egress, 'egressEnabled', egress)
        add_if(dict, ingress, 'ingressEnabled', ingress)
        add_if(dict, max_bind, 'maxBindCount', max_bind, 0)
        add_if(dict, max_unacked, 'maxDeliveredUnackedMsgsPerFlow', max_unacked, 0)
        add_if(dict, max_msg_size, 'maxMsgSize', max_msg_size, 0)
        add_if(dict, max_spool, 'maxMsgSpoolUsage', max_spool, 0)
        add_if(dict, max_redelivery, 'maxRedeliveryCount', max_redelivery, 0)
        add_if(dict, ttl, 'maxTtl', ttl, 0)
        add_if(dict, owner, 'owner', owner, '')
        add_if(dict, perm, 'permission', perm_map[perm] if perm else '', '')
        add_if(dict, low_priority, 'rejectLowPriorityMsgEnabled', low_priority)
        add_if(dict, low_priority_msg_limit, 'rejectLowPriorityMsgLimit', low_priority_msg_limit, 0)
        add_if(dict, reject_on_discard, 'rejectMsgToSenderOnDiscardBehavior', reject_on_discard)
        add_if(dict, respect_priority, 'respectMsgPriorityEnabled', respect_priority)
        add_if(dict, respect_ttl, 'respectTtlEnabled', respect_ttl)

        # logging.debug(dict)

        rest_mgr = RestMgr(kwargs)
        if is_post:
            res = rest_mgr.post(suburl, dict)
        else:
            res = rest_mgr.patch(suburl, qname, dict)
        send_response(res)
    # except Exception as ex:
    #     logger.error(f"upsert Exception: {ex}")



@queue.command()
@click.argument("qname")
@click.option('--exclusive/--no-exclusive', default=None,
              help='Access type for delivering messages')
@click.option('--ack-propagation/--no-ack-propagation', default=None,
              help='Propagation of consumer acknowledgements (ACKs) received on the active replication Message VPN to the standby replication Message VPN')
@click.option('--dmq',
              help='Dead Message Queue DMQ')
@click.option('--egress/--no-egress', default=None,
              help='Allow transmission of messages')
@click.option('--ingress/--no-ingress',  default=None,
              help='Allow reception of messages')
@click.option('--max-bind', type=int,
              help='Maximum number of consumer flows that can bind')
@click.option('--max-unacked', type=int,
              help='Maximum number of messages, per flow,  delivered but not acknowledged')
@click.option('--max-msg-size', type=int,
              help='Maximum message size, in bytes')
@click.option('--max-spool', type=int,
              help='Maximum spool usage, in Megabytes. 0 only allows spooling of the last message received and disables quota checking')
@click.option('--max-redelivery', type=int,
              help='Maximum number of attempts for redelivery of a message prior to it being discarded or moved to the DMQ. 0 means to retry forever')
@click.option('--ttl', type=int,
              help='Maximum time, in seconds, a message can stay in the Queue when respect-ttl is "true". A message expires when the lesser of the sender assigned time-to-live (TTL) in the message and the max-ttl configured for the queue, is exceeded. A value of 0 disables expiry')
@click.option('--owner',
              help='Client Username that owns the Queue and has permission equivalent to "delete"')
@click.option('--perm', type=click.Choice(['no', 'ro', 'rw', 'modify', 'admin'], case_sensitive=True), default=None,
              help='Permission level for consumers, excluding the owner')
@click.option('--low-priority/--no-low-priority', default=None,
              help='Control the checking of low priority messages against the low-priority-msg-limit. This may only be enabled if reject-on-discard does not have a value of "never".')
@click.option('--low-priority-msg-limit',
              help='The number of messages of any priority  above which low priority messages are not admitted but higher priority messages are allowed')
@click.option('--reject-on-discard', type=click.Choice(['always', 'never', 'when-queue-enabled'], case_sensitive=True),
              help='Determines when to return negative acknowledgements (NACKs) on message discards')
@click.option('--respect-priority/--no-respect-priority', default=None,
              help='When enabled, messages contained in the Queue are delivered in priority order, from 9 (highest) to 0 (lowest). MQTT queues do not support enabling message priority')
@click.option('--respect-ttl/--no-respect-ttl', default=None,
              help='Respect the time-to-live (TTL) for messages and expired messages are discarded or moved to the DMQ')
@my_global_options
def update(qname,
           exclusive, ack_propagation, dmq, egress, ingress, max_bind, max_unacked, max_msg_size, max_spool,
           max_redelivery, ttl, owner, perm, low_priority, low_priority_msg_limit, reject_on_discard,
           respect_priority, respect_ttl,
           **kwargs):
    '''Update the properties of an existing queue'''
    upsert(False, qname,
           exclusive, ack_propagation, dmq, egress, ingress, max_bind, max_unacked, max_msg_size, max_spool,
           max_redelivery, ttl, owner, perm, low_priority, low_priority_msg_limit, reject_on_discard,
           respect_priority, respect_ttl,
           **kwargs)



@queue.command()
@my_global_options
@click.argument("qname")
def show(qname, **kwargs):
    '''Dump the properties of an existing queue'''
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.get(suburl, qname)
    send_response(res)

@queue.command()
@my_global_options
@click.argument("qname")
def remove(qname, **kwargs):
    '''Remove an existing queue'''
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.delete(suburl, qname)
    send_response(res)


@queue.command()
@my_global_options
def list(**kwargs):
    '''List all the queues'''
    rest_mgr = RestMgr(kwargs)
    res = rest_mgr.get(f'{suburl}', None)
    send_response(res)


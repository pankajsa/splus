import logging
import click

from common import *
from managers import QueueMgr

logger = logging.getLogger(__name__)

perm_map ={
    'no': 'no-access',
    'ro': 'read-only',
    'rw': 'consume',
    'modify': 'modify-topic',
    'admin': 'delete'
}


@click.group()
def queue():
    pass


@queue.command()
@my_global_options
@click.pass_context
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
def create(ctx, qname, exclusive, ack_propagation, dmq, egress, ingress, max_bind, max_unacked, max_msg_size, max_spool,
           max_redelivery, ttl, owner, perm, low_priority, low_priority_msg_limit, reject_on_discard,
           respect_priority, respect_ttl,
           **kwargs):
    try:
        logging.debug(f'create {qname} {kwargs}')
        sm = getSolaceMgr(ctx, kwargs)

        dict = {
            'queueName': qname,
            'accessType': 'exclusive' if exclusive else 'non-exclusive',
            'consumerAckPropagationEnabled': ack_propagation,
            'deadMsgQueue': dmq,
            'egressEnabled': egress,
            'ingressEnabled': ingress,
            'maxBindCount': max_bind,
            'maxDeliveredUnackedMsgsPerFlow': max_unacked,
            'maxMsgSize': max_msg_size,
            'maxMsgSpoolUsage': max_spool,
            'maxRedeliveryCount': max_redelivery,
            'maxTtl': ttl,
            'owner': owner,
            'permission': perm_map[perm],
            'rejectLowPriorityMsgEnabled': low_priority,
            'rejectLowPriorityMsgLimit': low_priority_msg_limit,
            'rejectMsgToSenderOnDiscardBehavior': reject_on_discard,
            'respectMsgPriorityEnabled': respect_priority,
            'respectTtlEnabled': respect_ttl,
        }
        queueMgr = QueueMgr(sm)
        res = queueMgr.create(qname, dict)
        logger.debug("create - END")
    except Exception as ex:
        print('ERRROR')
        logger.error(f"create - END + {ex}")



@queue.command()
@my_global_options
@click.pass_context
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
def update(ctx,
           qname, exclusive, ack_propagation, dmq, egress, ingress, max_bind, max_unacked, max_msg_size, max_spool,
           max_redelivery, ttl, owner, perm, low_priority, low_priority_msg_limit, reject_on_discard,
           respect_priority, respect_ttl,
           **kwargs):
    try:
        logging.debug(kwargs)
        logging.debug(f'update ')

        dict = {}

        if exclusive is not None:
            dict['accessType'] = 'exclusive' if exclusive else 'non-exclusive'
        if ack_propagation is not None:
            dict['consumerAckPropagationEnabled'] = ack_propagation
        if dmq is not None:
            dict['deadMsgQueue'] = dmq
        if egress is not None:
            dict['egressEnabled'] = egress
        if ingress is not None:
            dict['ingressEnabled'] = ingress
        if max_bind is not None:
            dict['maxBindCount'] = max_bind
        if max_unacked is not None:
            dict['maxDeliveredUnackedMsgsPerFlow'] = max_unacked
        if max_msg_size is not None:
            dict['maxMsgSize'] = max_msg_size
        if max_spool is not None:
            dict['maxMsgSpoolUsage'] = max_spool
        if max_redelivery is not None:
            dict['maxRedeliveryCount'] = max_redelivery
        if ttl is not None:
            dict['maxTtl'] = ttl
        if perm is not None:
            dict['permission'] = perm_map[perm]
        if low_priority is not None:
            dict['rejectLowPriorityMsgEnabled'] = low_priority
        if low_priority_msg_limit is not None:
            dict['rejectLowPriorityMsgLimit'] = low_priority_msg_limit
        if reject_on_discard is not None:
            dict['rejectMsgToSenderOnDiscardBehavior'] = reject_on_discard
        if respect_priority is not None:
            dict['respectMsgPriorityEnabled'] = respect_priority
        if respect_ttl is not None:
            dict['respectTtlEnabled'] = respect_ttl

        logging.debug(dict)
        sm = getSolaceMgr(ctx, kwargs)
        queueMgr = QueueMgr(sm)
        res = queueMgr.update(qname, dict)
        logger.debug("create - END")
    except Exception as ex:
        print('ERRROR')
        logger.error(f"create - END + {ex}")


@queue.command()
@click.pass_context
def show(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('queue_create')

@queue.command()
@click.pass_context
def remove(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('queue_create')

@queue.command()
@click.pass_context
def clone(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('queue_create')

@queue.command()
@click.pass_context
def list(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('queue_create')

@queue.command()
@click.pass_context
def subscription(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('queue_create')


@queue.group()
@click.pass_context
@click.argument('qname')
def replay(ctx, qname,  **kwargs):
    logging.debug(ctx.obj)
    logging.debug(f'replay {qname}')

@replay.command()
@click.pass_context
def start(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('replay start')


@replay.command()
@click.pass_context
def cancel(ctx, **kwargs):
    logging.debug(ctx.obj)
    logging.debug('replay cancel')


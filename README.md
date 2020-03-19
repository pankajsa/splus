# splus
## Overview
Solace PubSub SDK is a SDK kit which allows management of Solace PubSub+ Brokers.
Along with the CLI available within the broker, SEMP APIs, Web Admin and SolAdmin
this is one more way of administrating the broker.

While there are already so many ways of managing the broker, the motivation for this project is
* simple way to integrate with scripts
* reasonable defaults for easing the administration activities, especially for those new to PubSub+
* recipes for allowing use case based based administration
* allow advanced customization through scripts
* central tool to manage multiple brokers
* event mesh management

## Commands
splus <command> <subcommand> <options and parameters>

### Configuration
splus config  -msgVpn -url -username -password

### VPN Management
msgvpn create --msgVpnName --authenticationBasicEnabled 
msgvpn show --msgVpnName --select=''
msgvpn remove --vpnname
msgvpn list --select='' 

msgvpn enable|disable



### ACL Management
aclprofile create --name
aclprofile show --name
aclprofile remove --name
aclprofile list

### Client Management
clientprofile create --name
clientprofile show --name
clientprofile remove --name
clientprofile list

### Queue Management
queue create --qname
queue show --qname
queue remove --qname
queue list

queue subscription --clear
queue subscription add --queueName <qname> <topicname>



### Service Management

smf enable  --allow-downgrade --max-connections
web enable  --allow-downgrade --max-connections



mqtt enable --listen-port --tls-listen-port
mqtt disable

mqtt retain enable|disable

rest enable|disable
amqp enable|disable
smf enable|disable

### Broker Service Management
broker mqtt enable
broker mqtt retain enable|disable
broker rest enable|disable
broker amqp enable|disable
smf enable|disable

### Event Mesh
mesh create --name 


### Version
version
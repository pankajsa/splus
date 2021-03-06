# splus - Solace PubSub+ SDK
## Overview
Solace PubSub+ SDK is a SDK CLI kit which allows management of Solace PubSub+ Brokers.
Along with the CLI available within the broker, SEMP APIs, Web Admin and SolAdmin
this is one more way of administrating the broker.

While there are already so many ways of managing the broker, the motivation for this project is
* simple way to integrate with CI/CD scripts
* reasonable defaults for easing the administration activities, especially for those new to PubSub+
* recipes for allowing use case based based administration
* allow advanced customization through scripts
* central tool to manage multiple brokers
* event mesh management
* align with the sdk cli approach used by modern solution including AWS, GCloud etc

## Installation
This is a _python_ application and needs python v3.x

Clone the repository and install the tool
`pip3 install . `

Since this tool configures a Solace PubSub+ Broker its assumed that you already have access to a Solace Broker
e.g. 
```
docker run -d -p 8080:8080 -p 55555:55555 -p:80:8008 -p:1883:1883 -p:8000:8000 -p:5672:5672 -p:9000:9000 -p:2222:2222 --shm-size=2g --env username_admin_globalaccesslevel=admin --env username_admin_password=admin --name=solace solace/solace-pubsub-standard
```
## Commands
splus <command> <subcommand> <options and parameters>


e.g.  
splus --help  
splus config --broker-url http://localhost:8080 --broker-username admin --broker-password admin 
splus msgvpn create myvpn1  

### Global Options
--msgvpn  
--broker-url  
--broker-user  
--broker-password  
--output=text|json  

### @ToDo
This project is under construction, and the below capabilities are still not done
- TLS Setup
- DMR Cluster
- OAuth
- LDAP Authorization Group
- Bridge
- Topic Endpoint
- Replicated Topics

### Configuration
config  --default-vpn <name> --broker-url <url> --broker-user <username> --broker-password <password> --output=(json|text)

### VPN Management
msgvpn create <name> --authenticationBasicEnabled ....  
msgvpn update <name> --force  
msgvpn show <name> --select=''  
msgvpn remove <name> --force --quiet  
msgvpn list --select=''  
msgvpn enable|disable <name>


### Users
user create <name> --password <password> --global-access-level no|rw|ro|adm 
       --default-vpn-access no|ro|rw --exceptions [{"msgvpn":"vpnname","access":"no|rw|ro"},]  
user update <name> --password <password> --global-access-level no|rw|ro|adm   
                          --default-vpn-access no|ro|rw --exceptions [{"msgvpn":"vpnname","access":"no|rw|ro"},]  
user show <name>   
user remove <name> --force  
user list 




### ACL Management
aclprofile create <name>  --default-connect --default-publish --de  
aclprofile update <name>   
aclprofile show <name>  
aclprofile remove <name>  
aclprofile list


### Client Management
clientprofile create <name>  
clientprofile update <name>  
clientprofile show <name>  
clientprofile remove <name>  
clientprofile list  

### Queue Management
queue create <name>  
queue update <name> --enable-incoming --enable-outgoing --clear-stats --exclusive-access/--no-exclusive-access --quota=<num-in-MB>  
    --owner=<ownername> --permission=no|ro|consume|modify|delete --max-consumer-count=<num>  
    ....  
queue show <name>  
queue remove <name>  
queue list  
queue replay <name> start|cancel --from=<time>  
queue clone <name> <newname> --children  
queue subscription <name> --clear  
queue subscription <name>  <topicname1> <topicname2>  
queue subscription <name>  --remove <topicname>  

### JNDI
jndi --enable/no-enable  
jndi cf create <name> --connect-timeout....  
jndi cf update <name>  
jndi cf show <name>  
jndi cf remove <name> --force  
jndi cf list  
jndi topic --logical <name> --physical <name>  
jndi topic --logical <name> --remove  
jndi queue --logical <name> --physical <name>  
jndi queue --logical <name> --remove  



### REST
rest rdp create <name> --client-profile <cp> --enable/no-enable --queue <queue1>  
rest rdp show <name>  
rest rdp update <name>  
rest rdp remove <name>  
rest rdp list  

rest rc create <name> --rdp <name> --enable/no-enable --host <host> --port <portnum> --tls/--no-tls --connection-count <num> --retry-time <num> --retry-delay <num> 
    --basic-auth / --cert-auth --username <name> --password <password> --tls-cn <name1>  
rest rc show <name>  
rest rc update <name>  
rest rc remove <name>     
rest rc lisy  

### API Microgateway
apigw create <name> --listen-port <port> --tls-listen-port <port> --queue <name> --pattern <default > --host <host> --port <port>  
    RC Name = {name}_rc  
    RDP Name = {name}_rdp  
    

### Alert Thresholds
alert queue <name> --trigger <num>|trigger-percent <num> --clear <num>|clear-percent <num>  

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
broker backbone enable|disable  

broker smf enable|disable --port <num> --tls-port <num>  
 --compress-port <num> --routing-port <num>  
broker smf show  

broker web enable|disable --port <num> --tls-port <num> --url-suffix <suffix>  
broker web show  

broker mqtt enable|disable --retain-mem <num>  
broker mqtt show  

broker amqp enable|disable  
broker amqp show  

broker healthcheck enable|disable --port <num>  
broker healthcheck show  

broker matelink enable|disable --port <num>  
broker matelink show  

broker redundancy enable|disable --port <num>  
broker redundancy show  

broker semp --tls-port <num>  
broker semp show  

### Cert Authorities
certauth create <name> --.....  
certauth delete <name>  
certauth show <name>  
certauth list --select= --count= --cursor= --where=  

### Event Mesh  
mesh create --name   


### Version  
version  

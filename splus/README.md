# splus
Solace PubSub SDK


splus <command> <subcommand> <options and parameters>

config  -msgVpn -url -username -password

msgvpn create --msgVpnName --authenticationBasicEnabled 
msgvpn show --msgVpnName --select=''
msgvpn remove --vpnname
msgvpn list --select='' 


aclprofile create --name
aclprofile show --name
aclprofile remove --name
aclprofile list

clientprofile create --name
clientprofile show --name
clientprofile remove --name
clientprofile list

queue create --qname
queue show --qname
queue remove --qname
queue list

version
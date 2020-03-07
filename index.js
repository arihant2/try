const Discord=require('discord.js');
const {prefix,token}=require('./config.json');
const client=new Discord.Client();

client.once('ready',()=>{console.log('itsready')})                              //print msg 'ready'
client.on('message',message=>
{
    if(message.member.hasPermission(['KICK_MEMBERS','BAN_MEMBERS']))            //only these can kick
    {
        //console.log(message.content)                                         //print received msgs from srvr
        if(message.content.startsWith(`${prefix}fuck`))
        {
            message.channel.send("hindi me gali de"+" :relieved: ")
            let member=message.mentions.members.first();                            //display name of member using that word
            member.kick().then((member)=>                                           //kicks the member
            {
                message.channel.send(" :wave: "+"member.displayname")+" has been kicked! ")         //cnfrm kicking
            })
        }
    }
})

client.login(token);
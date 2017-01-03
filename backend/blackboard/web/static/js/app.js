import "phoenix_html"
import {Socket, LongPoller} from "phoenix"


//Socket
let socket = new Socket("/socket", {
    logger: ((kind, msg, data) => { console.log(`${kind}: ${msg}`, data) })
})

socket.connect({})

socket.onOpen( ev => console.log("OPEN", ev) )
socket.onError( ev => console.log("ERROR", ev) )
socket.onClose( e => console.log("CLOSE", e))

//Channel
let channel = socket.channel("rooms:blackboard", {})
channel.join().receive("ok", () => console.log("join ok"))

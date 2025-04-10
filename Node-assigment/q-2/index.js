const express = require("express")
const app = express()

const users = [
    {
        id: 1,
        name: "John",
        age: 25
    },
    {
        id: 2,
        name: "Jane",
        age: 30
    },
    {
        id: 3,
        name: "Bob",
        age: 20
    }
]
app.get("/",(req,res)=>{
    res.send("server is running")
})

app.get("/users",(req,res)=>{
    res.send("users")
    res.json(users)
})

app.listen(port,()=>{
    console.log(`server is running on port ${port}`)
})
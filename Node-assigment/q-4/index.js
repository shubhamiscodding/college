const express = require("express")
const app = express()
const port = 300;
app.listen(port, ()=> {
    console.log("server is running on port 300")
})

app.use(express.json())

const users = [
    {id: 1, name: "sourav"},
    {id: 2, name: "sourav1"},
]

app.get("/users/:id",(req,res)=> {
    const id = req.params.id;
    const user = users.find((user)=> user.id === id)
    res.json(user)
})
const express = require("express")
const app = express()

const port = 3000

const users=[
    { id: 1, name: "John Doe" },
    { id: 2, name: "Jane Doe" },
]

app.get("/", (req, res) => {
    res.send("Hello World!")
})

app.post("/users",(req,res)=>{
    const user = req.body;
    users.push(user)
    res.status(201).json(user);
})

app.listen(port, () => {
    console.log(`Example app listening on port ${port}`)
})
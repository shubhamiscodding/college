const express = require("express")
const app = express()
const port =3000
app.listen(port , ()=>{
    console.log(`server is running on port ${port}`)
})
const users = [
    { id: 1, name: "John Doe", age: 25 },
    { id: 2, name: "Jane Smith", age: 30 },
    { id: 3, name: "Alice Johnson", age: 28 },
]

app.use(express.json())

app.patch("/user/:id",(req,res)=>{
    const id = req.params.id
    const user = users.find((user)=>user.id === parseInt(id))
    user.name = req.body.name;
    res.json(user)
})
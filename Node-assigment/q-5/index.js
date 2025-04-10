const express = require("express")
const app = express()
const port =3000;

app.listen(3000,()=>{
    console.log(`server is running on port ${port}`)
})

app.use(express.json())

const users = [
    { id: 1, name: "John Doe", age: 25 },
    { id: 2, name: "Jane Doe", age: 30 },
]

app.put("users/:id",(req,res)=>{
    const id = parseInt(req.params.id)
    const user = users.find((u)=>u.id === id)
    user.name = req.body.name;
    user.age = req.body.age;
    res.json(user)
})
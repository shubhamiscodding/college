const express = require('express');
const app = express();
const port =3000;

app.listen(port,() =>{
    console.log(`Server is running at http://localhost:${port}`);
})

const users = [
    {id:1, name:'John', age:25},
    {id:2, name:'Jane', age:30},
    {id:3, name:'Bob', age:35}
]

app.use(express.json())

app.delete("/users/:id",(req,res)=>{
    const id = req.params.id;
    const userIndex = users.findIndex(user => user.id == id);
    users.splice(userIndex,1);
    res.status(200).json({message:'User deleted successfully'})
})
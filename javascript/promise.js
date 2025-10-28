// let getjobs = false;

// let mypromise = new Promise(function (resolve, reject) {
//     if (getjobs) {
//         resolve("gto job of 25 lpa");
//     } else {    
//         reject("didnt get job");
//     }
// });

// mypromise.then(function (res) {
//     console.log(res);
// }).catch(function (err) {
//     console.log(err);
// });



// // use callback function for this example
// function oderfood (readyfood){
//     setTimeout(()=>{
//         console.log("food ordered");
//     })
// }

// function readyfood(ordercomplete){
//     setTimeout(()=>{
//         console.log("food ready");
//     },1000)
// }


// function ordercomplete(){
//     setTimeout(()=>{
//         console.log("food delivered");
//     },1000)
// }



// oderfood(()=>{
//     readyfood(()=>{
//         ordercomplete()
//     })
// });




// // use promise for this example
// function oderfood (){
//     return new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             resolve("food ordered");
//         },1000)
//     })
// }

// function readyfood(){
//     return new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             resolve("food ready");
//         },1000)
//     })
// }

// function ordercomplete(){
//     return new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             resolve("food delivered");
//         },1000)
//     })
// }

// oderfood().then(()=>{
    
//     return readyfood();
// }).then(()=>{
    
//     return ordercomplete();
// }).then((res)=>{
//     console.log(res);
// })
// .catch((err)=>{
//     console.log(err);
// });

// oderfood();



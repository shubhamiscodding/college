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


// let promise = new Promise((resolve,reject)=>{
//     let success = false;
//     if(success){
//         resolve("promise resolved successfully");
//     }else{
//         reject("promise rejected");
//     }
// });

// console.log(promise);

// promise.then((result)=>{
//     console.log(result);
// })
// .catch((error)=>{
//     console.log("some error");
//     console.error(error);
// })
// .finally(()=>{
//     console.log("Request Completed");
// })



// promise chainning

// fetch('https://jsonplaceholder.typicode.com/posts/1')
//     .then((res) => {
//         const data = res.json();
//         return data;
//     })
//     .then((data)=>{
//         console.log(data);
//     })
//     .catch((err)=>{
//         console.error("HERE IS THE ERROR : ",err);
//     })
//     .finally(()=>{
//         console.log(" FETCHING the data");
//     })



// async await example

// async function getdata(){
//     try{
//         const res = await fetch('https://jsonplaceholder.typicode.com/posts/1');
//         const data = await res.json();
//         console.log(data);
//     }catch(err){
//         console.error("HERE IS THE ERROR : ",err);
//     }finally{
//         console.log(" FETCHING the data");
//     }
// }


// getdata();





// function debouncing(search, timedelay) {
//     let timer;
//     return function (queary) {
//         clearTimeout(timer);
//         timer = setTimeout(() => {
//             search(queary);
//         }, timedelay);
//     }
// }

// const search = (queary) => {
//     console.log("seaarching : ", queary);
// }

// const debouncingfunction = debouncing(search, 5000);

// // search("jav");
// // search("java");
// // search("javas");
// // search("javasc");
// // search("javascr");
// // search("javascri");
// // search("javascrip");
// // search("javascript");






// function throttling(sendMessage, timedelay) {
//     let lastCall = 0;
//     return function (message) {
//         const now = Date.now();
//         if (now - lastCall <= timedelay) {
//             return;
//         }
//         lastCall = now;
//         console.log("this is the lastcall : ",lastCall);
//         console.log("this is the now : ",now);
//         sendMessage(message);
//     }
// }

// function sendMessage(message) {
//     console.log("Send Message:", message, "at", new Date().toLocaleTimeString());
// }

// let sendMessageWithThrottle = throttling(sendMessage, 2000);
// // sendMessage("time check :")

// sendMessageWithThrottle("time check : 1");
// setTimeout(() => { sendMessageWithThrottle("time check : 2"); },3000);
// sendMessageWithThrottle("time check : 3");






// function encap(amount) {
//     let balance = amount;

//     function validate(numm) {
//         return numm > 0 && typeof (numm) === "number";
//     }

//     return {
//         check: function () {
//             console.log("this is the current balance : ");
//             return balance;
//         },
//         deposite: function (add) {
//             if (validate(add)) {
//                 console.log("deposite amount :", add);
//                 balance += add;
//             }
//         },
//         withdraw: function (sub) {
//             if (validate(sub) && sub <= balance) {
//                 console.log("withdraw amount :", sub);
//                 balance -= sub;
//             }else{
//                 console.log("insufficient balance");
//             }
//         }
//     }

// }




// const user1 = encap(10000);
// console.log(user1);
// console.log(user1.check());
// user1.deposite(5000);
// console.log(user1.check());
// user1.withdraw(2000);
// console.log(user1.check());










// class profile {
//     #email;
//     #password;
//     username;

//     #loginAttempt;
//     constructor(email, password, username) {
//         this.username = username;
//         this.#email = email;
//         this.#password = this.#hashPassword(password);
//         this.#loginAttempt = 0;
//     }

//     #hashPassword(password) {
//         return `hashed_${password}`;
//     }


//     getUser() {
//         return this.#email;
//     }

//     updatePassword(oldPassword, newPassword) {
//         if (this.#password === this.#hashPassword(oldPassword)) {
//             this.#password = this.#hashPassword(newPassword);
//             console.log('Password updated successfully.');
//         } else {
//             console.log('Old password is incorrect.');
//         }
//     }

//     login(user, pass) {
//         if (this.#loginAttempt >= 4) {
//             return `block for 24 hours`;
//         }
//         if (user === this.username || user === this.#email) {
//             if (this.#hashPassword(pass) === this.#password) {
//                 return `login succes`;
//             } else {
//                  this.#loginAttempt++;
//                 return `wrong password`;
//             }
//         }

//         return "Invalid username or email";

//     }

//     logout() {
//         this.#loginAttempt = 0;
//         return "Logout Successfully";
//     }
// }





// const user1 = new profile("user@gmail.com", "1234", "user123");
// console.log(user1.getUser());
// console.log(user1.login("user123", "1234"));









// class animal {
//     #isalive;
//     constructor(name, spices) {
//         this.name = name;
//         this.spices = spices;
//         this.#isalive = true;
//     }

//     eat(food) {
//         return `${this.name} animal eats ${food}`;
//     }

//     sleep() {
//         return `${this.name} animal is sleeping`;
//     }

//     makesound(){
//         return `${this.name} animal makes a sound`;
//     }
//     getinfo(){
//         return `Name : ${this.name} spices : ${this.spices}`;
//     }
// }


// class dog extends animal{
//     constructor(name,breed){
//         super(name,"German sefard");
//         this.breed = breed;
//         this.#loyalmeter = 10;
//     }
//     #loyalmeter;

//     makesound(){
//         return `${this.name} dog barks bawh bawh`;
//     }

//     wagtail(){
//         return `${this.name} dog is wagging its tail`;
//     }

//     getinfo(){
//         return `${super.getinfo()},   breed : ${this.breed}`;
//     }

// }




// const bunny = new dog("buddy", "golden retrival");
// console.log(bunny.getinfo());
// console.log(bunny.makesound());
// console.log(bunny.wagtail());
// console.log(bunny.eat("roti"))








class person{
    #email;
    constructor(name,age,email){
        this.name = name;
        this.age = age;
        this.#email = email;
    }

    getinfo(){
        return `name : ${this.name} age : ${this.age} email : ${this.#email}`;
    }
}

class emp1 extends person{
    constructor(name,age,email,emp_id,salary,department){
        super(name,age,email);
        this.emp_id = emp_id;
        this.salary = salary;
        this.department = department;
    }

    setSalary(newSalary){
        this.salary = newSalary;
    }

    getSalary(){
        return this.salary;
    }

    work(){
        return `${this.name} is working`;
    }

    getEmployinfo(){
        return `${super.getinfo()}, emp_id : ${this.emp_id} salary : ${this.salary} department : ${this.department}`;

    }

}


const emmp = new emp1("jay",15,"shubhan@gmail.com",12,1020000,"it");
console.log(emmp.getEmployinfo());
console.log(emmp.work());
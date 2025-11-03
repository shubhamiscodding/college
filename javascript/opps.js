// class Person{
//     constructor(name,age){
//         this.name = name;
//         this.age = age;
//     }
// }

// let men1 = new Person("shubham",20);
// console.log(men1.age)


// let Animal = {
//     eats : true,
//     walk : () => {
//         console.log("Animal Started walking....")
//     }
// };

// let rabbit = Object.create(Animal);
// rabbit.lazy = true;

// console.log(rabbit);
// console.log(rabbit.__proto_);

// rabbit.__proto_.run = true;

// console.log(rabbit.__proto_);


// let vahical = {
//     haswheels : true,
// };
// let bike = Object.create(vahical);
// bike.type = "sports";

// let electricBike = Object.create(bike);
// electricBike.hasBattery = true;

// console.log(electricBike);




// let userPrototype = {
//     login : function() {
//         console.log("You are logged in successfully");
//     },

//     logout : function() {
//         console.log("You are logged out successfully");
//     }
// };

// function createUser(name,role){
//     let user = Object.create(userPrototype);
//     user.name = name;
//     user.role = role;
//     return user;
// }


// let admin = createUser("shubham","admin");


// console.log("this is the full user OBJ:",admin);
// admin.login();
// console.log("this is the user name:",admin.name);
// console.log("this is the user role:",admin.role);
// admin.logout();

// console.log(admin.__proto__ === userPrototype);



// /*Q1. Create two objects: animal and dog. The dog object should inherit from animal and have its Own bark() method. The animal obiect should have an eat ( method that the dog object can also access.)*/

// let animal = {
//     eat : function() {
//         console.log("The animal is eating.");
//     }
// };

// let dog = Object.create(animal);
// dog.bark = function() {
//     console.log("bwk nwk...");
// }

// dog.eat();
// dog.bark();



// /* Q2. Write a constructor function laptop that takes brand and model as arguments. Attach a showSpace() method to Laptop. prototype to display the laptop's brand and model*/

// function laptop (brand,model){
//     this.brand = brand;
//     this.model = model;
// }
// laptop.prototype.showSpace = function() {
//     console.log(`Laptop Brand is: ${this.brand} and Model is: ${this.model}`);
// }

// laptop1 = new laptop("Asus","Snapdragon");
// laptop1.showSpace();


// let arr = [1, 2, 3, 5, 6, 8];

// Array.prototype.sum = function () {
//     return this.reduce((acc, curr) => {
//         // console.log(acc, curr);
//         return acc + curr;
//     }, 0)
// }

// console.log(arr.sum());




let arr = [1, 2, 3, 5, 6, 8];

Array.prototype.sum = function () {
    return this.reduce((acc, curr) => {
        // console.log(acc, curr);
        return acc + (curr**2);
    }, 0)
}

console.log(arr.sum());
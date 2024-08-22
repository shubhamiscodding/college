var x=[[1,2],[3,4],[5,6],1,2,3,"shubham"];

// array.length 
// tostring-it convert array to string
console.log(x.toString());
// x.at()=array[]
// array.join
console.log(x.join("="));
// pop-to pop out/remove value out of js from end 
console.log(x.pop());
console.log(x);
// push-add value at the end
console.log(x.push("mozrella"));
console.log(x);
// shift-to remove element from front and shift other to lower index
x.shift();
console.log(x);
//unshift-to add value at the start of array
x.unshift(56);
console.log(x);
// delete-to delete any element and print unidentify
delete x[0];
console.log(x);
//concat-to connect to diffrent array (infinite arrays)
var z=[1,2,"block",3.3];
var y=x.concat(z);
console.log(y);
// copywithin - to capy value to 1 index and paste it in another index
x.copyWithin(1,2);
console.log(x);
// flat- sub array to normal array
var y = x.flat();
console.log(x)
console.log(y)

//flatmap-creat anew array with some edit
x.flatMap(x=>[x,x*2])
console.log(x);
//splice-to add new value to array/to remove somthing/replace value
x.splice(2,0,8,"mozrela","piza","with hotchill katchup");
console.log(x)
x.splice(3,4,5);
console.log(x)
// tospliced to add new value in new array
var u=x.toSpliced(0,2,"shubham",);
console.log(u)
//slice-to slice out apart of array into new array
var q=x.slice(2);
console.log(q)

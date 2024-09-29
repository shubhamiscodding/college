let marks=26;
   if(marks<60){
     console.log("f");
   }
   else if(marks<69&&marks>60){
    console.log("D");
   }
   else if(marks<79&&marks>70){
    console.log("c");
   }
   else if(marks<89&&marks>80){
    console.log("b");
   }
   else{
    console.log("a");
   }
   //2]
    let num=3;
    if(num>0){
        console.log("number is positive");
      
    }
    else if(num<0){
        console.log("number is negative");
    }
    else{
        console.log("number is 0");
    }
    //3]
    
let side1=20;
let side2=20;
let side3=20;
  if(side1==side2&&side1==side3){
    console.log("it is an equilateral triangle");
  }
  else if(side1==side2||side1==side3||side3==side2){
    console.log("it is an isoceles triangle");
      
  }
  else{
    console.log("it is an scalene triangle");
  }
  //4]
  let side='c';
 
  if(side=='a'||side=='e'||side=='i'||side=='o'||side=='u'){
    console.log("Vowel");
  }
  
  else{
    console.log("Consonant");
  }
  //5]
  let sides=17;
 
  if(sides>=18){
    console.log("Eligible");
  }
  
  else{
    console.log("Not Eligible");
  }
  //6]
 let admin = "abcd";
  let pass = "1234";
  if (admin=="abcd"&& pass=="1234") {
      console.log("Login successful");
  } else {
      console.log("Login Unsuccessful");
  }
  //7]
let color ="red";
if(color=="red"){
    console.log("stop")
}
else if(color=="green"){
    console.log("go");

}
else{
    console.log("slow down")
}
//8]
let arr=[1,2,3,4,5]
avg=0
let aev=0;
length=arr.length
for(i=0;i<arr.length;i++){
      ag=arr[i]
      avg=avg+ag;
      aev=avg/length;
    }
console.log(aev);
//9]
let arr2=[2,2,2,2,6,5,7];
for(i=0;i<arr2.length;i++){
    for(j=i+1;j<arr2.length;j++){
        if(arr[j]>arr[i]){
            arr.push(arr2[i]);
        }
        else{
            arr.push(arr2[j])
        }

    }
   
}
console.log(arr2)

//10]
let ab=[1,3,4,5,6]
let odd=0
let even=0;
for(i=0;i<ab.length;i++){
    if(ab%2==0){
        even++
    }
    else{
        odd++
    }
}
console.log(odd)
console.log(even)
//11]
let arr3 = [1, 2, 2, 3, 4, 4, 5];
let uniqueArr = [];

for (let item of arr3) {
    if (!uniqueArr.includes(item)) {
        uniqueArr.push(item);
    }
}

console.log(uniqueArr);

//12]
let arr = [1, 2, 3, 4, 5];
arr.push(6);

console.log(arr);

//13]
let arr = [1, 2, 3, 4, 5];
let containsThree = arr.includes(3);

console.log(containsThree);
//14]
let nums = [1, 2, 3, 4];
nums.unshift(0);

console.log(nums);
//15]
let nums = [1, 2, 3, 4, 5];
nums.pop();

console.log(nums);
//16]
let arr = [3, 5, 9, 1, 7];
for(i=0;i<arr.length;i++){
    if(arr[i]>0){
        console.log("truue")
    }
    else{
        console.log("false")
    }
}
//17]
let arr = [3, 5, 9, 1, 7];
postive=0;
negative=0;

for(i=0;i<arr.length;i++){
    if(arr[i]>0){
        postive++
        }
    else{
      negative++
    }
}
console.log(postive)
console.log(negative)
//18]
let arr[2,4,5,6,7]
for(i=0;i<arr.length;i++){
    if(i%2==0){
        console.log(arr[i])
    }
}
//19]
arr=[1,2,3,4,5]
min=arr[0]
for(i=0;i<arr.length;i++){
     if(arr[i]<min){
        min=arr[i]
        arr2.push(arr[i])
}
else{
    min=min
    arr.push(min)
}
}
//20]
arr=[1,2,3,4,5]
min=arr[0]
max=arr[1]
for(i=0;i<arr.length;i++){
     if(arr[i]<min&&arr[i]>max){
        max=min
        min=arr[i]
        
     }
     else if(arr[i]>min&&arr[i]>max){
         
       arr[i]=max;
     }
     else{
        max=max
     }
    }
    //21]
    
let originalString = "Hello, World!";


let uppercasedString = originalString.toUpperCase();


console.log("Original String: " + originalString);
console.log("Uppercase String: " + uppercasedString);
//22]

let str = "Hello, world!";
let count = 0;


for (let i = 0; str[i] !== undefined; i++) {
    count++;
}

// Output the result
console.log("The length of the string is: " + count);
//23]
let str1 = "Hello, ";
let str2 = "world!";


let concatenatedString = str1 + str2;
console.log("The concatenated string is: " + concatenatedString);
//24]
let str = "   Hello, world!   ";
let trimmedString = str.trim();
console.log("The trimmed string is: '" + trimmedString + "'");
//25]
let str = "Hello, world! This is a test.";
let wordsArray = str.split(' ');
console.log("The array of words is:", wordsArray);
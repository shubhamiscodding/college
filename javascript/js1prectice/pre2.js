// var array=[1,3,2,4,5,8,7];
// // // 1

// var count=0;
// var r=0;
// while(array[r]!=undefined){
//         count=count+1;
//         r++;
// }
// console.log(count);




 
// // sort without inbuild function
//     const n = array.length;
  
//     for (let p = 0; p < n - 1; p++) {
//       for (let o = 0; o < n - p - 1; o++) {
//         if (array[o] > array[o + 1]) {
//           // Swap elements
//           [array[o], array[o + 1]] = [array[o + 1], array[o]];
//         }
//       }
//     }console.log(array)


// // profit in arr
// var pr=[7,2,6,1,8,9]
// var pro=pr[1]-pr[0];
// for(var i=0;i<pr.length;i++){
//     for(var j=i+1;j<pr.length;j++){
//         var npro=pr[j]-pr[i];
//         // console.log(npro)
//         if(pro<npro){
//             pro=npro;
//         }
//     }
// }
// console.log("max profit is ",pro)














// // find missing num
// array.sort((a, b) => a - b);
// const missingNumbers = [];

// for (let i = 1; i < array.length; i++) {
//   if (array[i] - array[i - 1] > 1) {
//     for (let j = array[i - 1] + 1; j < array[i]; j++) {
//       console.log(j)
//     }
//   }
// }













let arr=[0,0,1,0,1,0,1]
// sort the array
const n = arr.length;

  for (let i = 1; i < n; i++) {
    let key = arr[i];
    let j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j+ 1] = key;
  }
  console.log(arr)







  let array1 = [0, 0, 2, 1, 1, 2, 0, 0];

  // Sort array
  let length1 = array1.length;
  let count0 = 0;
  let count1 = 0;
  let count2 = 0;
  
  for (let k = 0; k < length1; k++) {
    if (array1[k] === 0) {
      count0++;
    } else if (array1[k] === 1) {
      count1++;
    } else if (array1[k] === 2) {
      count2++;
    }
  }
  
  let array2 = [];
  for (let c = 0; c < count0; c++) {
    array2.push(0);
  }
  for (let f = 0; f < count1; f++) {
    array2.push(1);
  }
  for (let b = 0; b < count2; b++) {
    array2.push(2);
  }
  
  console.log(array2);
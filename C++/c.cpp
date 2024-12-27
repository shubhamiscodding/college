// #include<iostream>
// #include <string>
// #include<algorithm>
// #include<vector>
// using namespace std;

//Que-1
// int main(){
//     int score;
//     cout<<"enter your number : ";
//     cin>>score;

//   if(score>=90 && score<=100){
// 		cout<<"Grade---->A";
// 	}else if(score>=80 && score<=89){
// 		cout<<"Grade---->b";
// 	}else if(score>=70 && score<=79){
// 		cout<<"Grade---->c";
// 	}else if(score>=60 && score<=69){
// 		cout<<"Grade---->d";
// 	}else if(score<60){
// 		cout<<"fail";
// 	}  
//  }


//Que-2
// int main(){
// 	float num;
// 	cout<<"Write a number : ";
// 	cin>>num;
	
// 	if(num>0){
// 		cout<<"Positive";
// 	}else if(num==0){
// 		cout<<"Zero";
// 	}else{
// 		cout<<"Negative";
// 	}
// }


//Que-3
// #include<stdio.h>
// int main(){
// 	int side1,side2,side3;
	
// 	 cout<<"Enter the three sides of the triangle: ";
//      cin>>side1>>side2>>side3;

   
//     if (side1 == side2 && side2 == side3) {
//         cout<<"The triangle is equilateral.";
//     }
    
//     else if (side1 == side2 || side2 == side3 || side1 == side3) {
//         cout<<"The triangle is isosceles.";
//     }
    
//     else {
//         cout<<"The triangle is scalene.";
//     }

//     return 0;
// }


//Que-4
// int main(){
// 	char ch;
// 	cout<<"Write a character : ";
// 	cin>>ch;
	
// 	if(ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u'){
// 		cout<<"Vowel";
// 	}else{
// 		cout<<"Consonant";
// 	}
// }


//Que-5
// int main(){
// 	int age;
// 	cout<<"Enter Your Ege : ";
// 	cin>>age;
	
// 	if(age>18){
// 		cout<<"You are eligible for vote";
// 	}else{
// 		cout<<"You are not eligible for vote";
// 	}
// }


//Que-6
// int main() {
//     // Predefined correct username and password
//     int sPass = 123;
//     string sName = "Rijans Patoliya";

//     // Variables to store user input
//     int yPass;
//     string yName;

//     // Prompt the user to input their username and password
//     cout << "Name: ";
//     getline(cin,yName);
//     cout << "Password: ";
//     cin >> yPass;

//     // Check if both username and password match
//     if (sName == yName && sPass == yPass) {
//         cout << "Login success";
//     } else {
//         cout << "Failed";
//     }

//     return 0;
// }


//Que-7
// int main(){
//     string color;
     
//     cout<<"Color is : ";
//     cin>>color;

//     if(color=="red"){
//         cout<<"stop";
//     }else if(color=="yellow"){
//         cout<<"slow down";
//     }else if(color=="green"){
//         cout<<"Go";
//     }else{
//         cout<<"Invalid";
//     }
// }


//Que-8

//Method-1
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int length = sizeof(arr)/sizeof(arr[0]);
//     int sum=0;
//     float avg;
   
//     for(int i=0;i<length;i++){
//          sum=sum+arr[i];
//     }

//     avg = static_cast<float>(sum) / length;
//     cout<<avg;
// }

//Method-2

// double findAverage(int arr[], int length) {
//     int sum = 0;
//     for (int i = 0; i < length; i++) {
//         sum += arr[i];
//     }
//     return static_cast<double>(sum) / length;
// }

// int main(){
//     int arr[] = {1,2,3,4,5,785};
//     int length = sizeof(arr)/sizeof(arr[0]);

//     double avg = findAverage(arr,length);
//     cout<<"average is : "<<avg<<endl;

//     return 0;
// }


//Que-9
// void arraySorting(int arr[],int size){
//     sort(arr,arr+size);
// }

// int main(){
//     int arr[]={2,4,3,1,5};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     arraySorting(arr,size);

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }


//Que-10
// void check(int arr[], int size) {  
//     int evenNum = 0;
//     int oddNum = 0;

//     // Count even and odd numbers
//     for (int i = 0; i < size; i++) {
//         if (arr[i] % 2 == 0) {
//             evenNum++;  
//         } else {
//             oddNum++;  
//         }
//     }

//     // Output the results
//     cout << "Even numbers: " << evenNum << endl;
//     cout << "Odd numbers: " << oddNum << endl;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

//     check(arr, size);  // Call the check function to count even and odd numbers

//     return 0;
// }


// Que-11

// int check(int arr[],int size){
//     sort(arr,size+arr);
//      int newSize = unique(arr, arr + size) - arr;
//      return newSize;
// }


// int main(){
//     int arr[]={1,4,5,3,4,1,3,2};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     int result = check(arr,size);

//     for(int i=0;i<result;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


// Que-12

// void pushElement(vector<int>& arr){
//     arr.push_back(8);
// }

// int main(){
//   vector<int> arr={1,2,3,4,5};

//   pushElement(arr);

//    for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
//    }

// }

// Q13

// void check(vector<int>&arr){
//   for (int i=0;i<arr.size();i++){
//     if(arr[i]==3){
//       cout << "true"<<" ";
//     }
//   }
// }

//  int main(){
//   vector <int> arr={3,4,5,6};
//   check(arr);
//  }

// q14

// void addElementToBeginning(int arr[], int size, int newElement) {
//     int updatedSize = size + 1;  
//     int updatedArr[updatedSize];  

//     updatedArr[0] = newElement; 

    
//     for (int i = 0; i < size; i++) {
//         updatedArr[i + 1] = arr[i];
//     }

   
//     cout << "Updated array: ";
//     for (int i = 0; i < updatedSize; i++) {
//         cout << updatedArr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int nums[] = {1, 2, 3, 4}; 
//     int size = sizeof(nums) / sizeof(nums[0]); 
//     int newElement = 0; 

//     addElementToBeginning(nums, size, newElement);

//     return 0;
// }

// q-15
// method-1
//  void popElement(vector<int>& arr){
//     arr.pop_back();
// }

// int main(){
//   vector<int> arr={1,2,3,4,5};

//   popElement(arr);

//    for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
//    }

// }

// // method=2
//  // void popElement(vector<int>& arr){
//  //  for(int i=0;i<arr.size()-1;i++){
//  //   cout << arr[i];
//  //   }
// // }

// // int main(){
// //   vector<int> arr={1,2,3,4,5};

// //   popElement(arr);
// // }

// method=3
//  void popElement(vector<int>& arr,int size){
//   size--;
//    for(int i=0;i<size;i++){
//     cout << arr[i];
//    }
// }

// int main(){
//   vector<int> arr={1,2,3,4,5};
//   int size=arr.size();

//   popElement(arr,size);
// }



// q16

// void ispositive(vector<int>arr,int x){
//   for(int i=0;i<arr.size();i++){
//     if(arr[i] < 0){
//       x++;
//     }
//   }
//   if(x>1){
//     return false;
//   }else{
//     return true;
//   }
// }
// int main(){
//   int x=0;
//   vector <int> arr={1,-2,3,-4};
//   ispositive(arr,x);
// }

// method=2
// bool ispositive(vector<int>arr,int x){
//   bool istrue=true;
//   for(int i=0;i<arr.size();i++){
//     if(arr[i] < 0){
//       istrue=false;
//     }
//   }
//   return istrue;
// }
// int main(){
//   int x=0;
//   vector <int> arr={1,2,3,4};
//   if(ispositive(arr,x)){
//     cout << "true";
//   }else{
//     cout << "false";
//   }
// }

// q=17
// void numofpn(int arr[],int plus,int neg,int size) {
//   for(int i=0;i<size;i++){
//     (arr[i]>0) ? plus++ : neg++;
//   }
//   cout << plus << endl;
//   cout << neg << endl;
// }
// int main(){
//   int arr[]={1,2,-4,5};
//   int size=sizeof(arr)/sizeof(arr[0]);
//   int plus=0;
//   int neg=0;

//   numofpn(arr,plus,neg,size);
// }

// q=18
//   void printeven(int arr[],int size){
//     for(int i=0;i<size;i++){
//       if(i%2==0){
//         cout << arr[i] << " ";
//       }
//     }
//   }
// int main(){
//   int arr[]={1,2,3,4};
//   int size=sizeof(arr)/sizeof(arr[0]);
  
//   printeven(arr,size);
// }

// method=2
//   void printeven(int arr[],int size){
//     for(int i=0;i<size;i+=2){
//         cout << arr[i] << " ";
//     }
//   }
// int main(){
//   int arr[]={1,2,3,4};
//   int size=sizeof(arr)/sizeof(arr[0]);
  
//   printeven(arr,size);
// }

// // q19
// bool issorted(int arr[],int size){
//   for(int i=0;i<size-1;i++){
//     if(arr[i]>arr[i+1]){
//       return false;
//   }
// }
// return true;
// }
// int main(){
//   int arr[]={1,2,5,8};
//   int size=sizeof(arr)/sizeof(arr[0]);

//  cout << issorted(arr,size);
// }

// // method=2
// bool isSortedBruteForce(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) { 
//         if (arr[i] > arr[i + 1]) {         
//             return false;               
//         }
//     }
//     return true; 
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     bool result = isSortedBruteForce(arr, size);
//     if (result) {
//         cout << "True" << endl; 
//     } else {
//         cout << "False" << endl; 
//     }

//     return 0;
// }

// q20
// void diff(int arr[],int size){
//   int min=arr[0];
//   int max=arr[0];
//   for(int i=0;i<size;i++){
//    if(arr[i]<min){
//     min=arr[i];
//     }
//   }
//   for(int i=0;i<size;i++){
//    if(arr[i]>max){
//     max=arr[i];
//     }
//   }
//   cout << max-min;
// }
// int main(){
//   int arr[]={1,2,3,4,5};
//   int size=sizeof(arr)/sizeof(arr[0]);
//   diff(arr,size);
// }

// method2
// void diff(int arr[],int size){
//   int min=arr[0];
//   int max=arr[0];
//   for(int i=0;i<size;i++){
//    if(arr[i]<min){
//     min=arr[i];
//     }
//    if(arr[i]>max){
//     max=arr[i];
//     }
// }
//  cout << max-min;
// }
// int main(){
//   int arr[]={1,2,3,4,5};
//   int size=sizeof(arr)/sizeof(arr[0]);
//   diff(arr,size);
// }

// q22
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int main() {
//     string hi = "hello";
//     vector<char> h(hi.begin(), hi.end()); 
//     int count=0;
//     for (char x : h) {
//         count++;
//     }
//     cout << count << endl;
//     return 0;
// }

// method-2
// #include<iostream>
// #include<string>
// using namespace std;
// int len(string str){
//     return str.length();
// } 
// int main(){
//     string str="hello";
//     cout << len(str) << endl;
// }



// q21
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int main() {
//     string hi = "hello";
//     vector<char> h(hi.begin(), hi.end()); 
//     for (char x : h) {
//         if(x>'a' && x<'z'){
//             x = x-32;
//         }
//     cout << x << endl;
//     }

//     return 0;
// }



// method-2
// #include<string>
// #include<iostream>
// using namespace std;
// string touppercase(string str){
//     for (int i = 0; i < str.length(); i++) {
//         if(str[i]>='a'  && str[i]<='z'){
//             str[i]=str[i]-32;
//         }
//     }
//     return str;
// }
// int main(){
//     string str = "hhhhiiii";
//     cout << touppercase(str) << endl;
// }


// method-3
// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;

// void touppercase(string& str) { 
//     for (char& c : str) {
//         c = toupper(c);
//     }
// }

// int main() {
//     string str = "hhhhiiii";
//     touppercase(str);
//     cout << str << endl;
//     return 0;
// }



// q23
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;

// int main(){
//     vector <string> hw={"hello"," ","world"};
//     string str=hw[0]+hw[1]+hw[2];
//     cout << str << endl;
// }


// method-2
#include<iostream>
#include<string>
using namespace std;
int con(string str1,string str2){
    return str1+str2;
}


// q24
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;

// int main(){
//     string str= "    hello ";
//     for(char x:str){
//     if(x!=' '){
//     cout << x;
//     }
//     }
//     return 0;
// }







































































// q-71
// #include <iostream>   //method 1
// using namespace std;

// int* revarr(int arr[], int size) {
//     int* narr = new int[size * 2];
//     for (int i = 0; i < size; i++) {
//         narr[i] = arr[i];
//         narr[i + size] = arr[i];
//     }
//     return narr; 
// }

// int main() {
//     int arr[] = {1, 2, 3};
//     int size = sizeof(arr) / sizeof(arr[0]);
    
//     int* result = revarr(arr, size); 
//     for (int i = 0; i < size * 2; i++) {
//         cout << result[i] << " ";
//     }
//     cout << endl;
    
//     delete[] result; 
//     return 0;
// }

// method2
// #include <iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr={1,2,3};
//     int size=arr.size();
//     for(int i=0;i<size;i++){
//         arr.push_back(arr[i]);
//     }
//     for(int i=0;i<arr.size();i++){
//         cout << arr[i] << " ";
//     }
// }

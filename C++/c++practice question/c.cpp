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
// #include<iostream>
// #include<string>
// using namespace std;
// string con(string str1,string str2){
//     return str1 + " " + str2;
// }
// int main(){
//     string str1="hello";
//     string str2="world";
//     cout << con(str1,str2) << endl;
// }


// method-3
// #include<iostream>
// #include<string>
// using namespace std;
// string con(string str1,string str2){
//     for(int i=0;i<str2.length();i++){
//      str1 += str2[i];
//     }
//     return str1;
// }
// int main(){
//     string str1="hello";
//     string str2=" world";
//     cout << con(str1,str2) << endl;
// }




// q24
// #include<iostream>
// #include<string>
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


// q-25
// #include <iostream>
// #include <sstream>
// #include <vector>
// using namespace std;

// int main() {
//     string inputString = "Hello world, welcome to JavaScript!";
//     string word;
//     vector<string> words;

//     istringstream stream(inputString);
//     while (stream >> word) {
//         words.push_back(word);
//     }

//     for (const auto& w : words) {
//         cout << "'" << w << "' ";
//     }

//     return 0;
// }

// method-2
// #include <iostream>
// #include <vector>
// #include <regex>
// using namespace std;

// int main() {
//     string inputString = "Hello world, welcome to JavaScript!";
//     regex word_regex("\\w+"); // Regular expression to match words
//     vector<string> words;
    
//     // Use regex_iterator to find all matches
//     auto words_begin = sregex_iterator(inputString.begin(), inputString.end(), word_regex);
//     auto words_end = sregex_iterator();
    
//     for (auto it = words_begin; it != words_end; ++it) {
//         words.push_back(it->str());
//     }

//     // Print each word
//     for (const auto& w : words) {
//         cout << "'" << w << "' ";
//     }

//     return 0;
// }

// q-26
// #include<iostream>
// #include<string>
// using namespace std;
// bool check(string str,char latter){
//     if(str[str.length()-1] == latter){
//         return true;
//     }
//     return false;
// }
// int main(){
//     string str="codinggita";
//     char latter='a';

//     cout <<check(str,latter);
//     return 0;
// }


// method-2
// #include<iostream>
// using namespace std;
// bool check(string str,char latter){
//     if(str.back()==latter){
//         return true;
//     }
//     return false;
// }
// int main(){
//     string str="codinggita";
//     char latter='a';

//     cout <<check(str,latter);
//     return 0;
// }


// q-27
// #include <iostream>
// #include<string>
// using namespace std;

// string extract(string file){
//     string str;
//     bool isfind=false;
//     int l=file.size();
//     for (int i=0;i<l;i++){
//         if(file[i]=='.'){
//             isfind=true;
//             continue;
//         }
//         if(isfind){
//        str += file[i];
//         }
//     }
//     return str;
// }

// int main() {
//     string file="doc.html";
    
//     cout << extract(file);

//     return 0;
// }


// method-2
// #include <string>
// #include <iostream>
// using namespace std;

// string fileex(string file){
//     int pos =file.rfind('.');
//     return file.substr(pos+1);
//     return "";
// }
// int main(){
//     string file="file.txt";
//     cout<<"using fileex function and rfind:" <<fileex(file)<<endl;
//     return 0;
// }



// method-3
// #include <iostream>
// #include<string>
// using namespace std;
// string fileex(string file){
//     size_t pos = file.find_last_of('.');
//     return file.substr(pos+1);
//     return "";
// }
// int main(){
//     string file="file.PDF";
//     cout <<fileex(file) << endl;
//     return 0;
// }








// q-28

// #include<iostream>
// using namespace std;
// int largnum(int num1,int num2){
//     if(num1>num2){
//         cout << num1 << " is the largest num";
//     }else if(num1==num2){
//         cout << " both num is equal";
//     }else{
//         cout << num2 << " is the largest num";
//     }
//     return 0;
// }
// int main(){
//     int num1=99;
//     int num2=90;
//     largnum(num1,num2);
//     return 0;
// }


// method-2
// #include<iostream>
// using namespace std;
// int max(int num1,int num2){
//     cout << "the largest num is : ";
//     return num1>num2?num1:num2;
// }

// int main(){
//     int num1=100;
//     int num2=20;
//     cout << max(num1,num2) << endl;
//     return 0;
// }

// method-3
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int maximum(int num1,int num2){
//     cout << "the largest number is : ";
//     return max(num1,num2);
// }
// int main(){
//     int num1=99;
//     int num2=55;
//     cout << maximum(num1,num2) << endl;
// }





// q-29

// #include<iostream>
// using namespace std;


// void checksum(int arr[],int target,int l){
//     int result[]={};
//     for(int i=0;i<l-1;i++){
//         for(int j=i+1;j<l;j++){
//             if(arr[i]+arr[j]==target){
//                 cout << i << "   " <<j << " index no";
//                 return;
//             }
//         }
//     }  cout << "No pair found" << endl;
// } 
// int main(){
//     int arr[]={1,2,23,4};
//     int target=9;
//     int l=sizeof(arr)/sizeof(arr[0]);

//      checksum(arr,target,l);
//      return 0;
// }

// method-2



// q30

// #include <iostream>
// using namespace std;

// int main() {
//    int n =123456,even = 0,odd = 0,reminder;
   
//    while(n>0){
//        reminder = n%10;
//        if(reminder%2==0){
//            even+=reminder;
//        }else{
//            odd+=reminder;
//        }
//        n=n/10;
//    }

//  cout << "Sum of even digits: " << even << endl;
//     cout << "Sum of odd digits: " << odd << endl;

//  return 0;
// }



// q31
// #include <iostream>
// using namespace std;

// int main() {
//    int n =3;
//    string s = "Hello";
   
//    for(int i=0;i<n;i++){
//        cout<<s;
//    }


//     return 0;
// }


// method-2
// #include<iostream>
// using namespace std;
// #include<string>
// string rep(string str,int n){
//     string result="";
//     for(int i=0;i<n;i++){
//         result+=str;
//     }
//     return result;
// }
// int main(){
//     string str="Hello";
//     int n=3;
//     cout<<rep(str,n)<<endl;
//     return 0;
// }


// leetcode question
// class Solution {
// public:
//     bool isPrefixString(string s, vector<string>& words) {
//         string result="";
//         for(int i=0;i<words.size();i++){
//             result += words[i];
//             if(result == s){
//                 return true;
//             }
//         }
//     return false;
//     };
// };

// q32
// #include <iostream>
// #include <string>
// using namespace std;

// string categorizeAgeIfElse(int age) {
//     if (age < 0) {
//         return "Invalid age";
//     } else if (age < 13) {
//         return "Child";
//     } else if (age < 18) {
//         return "Teenager";
//     } else if (age < 60) {
//         return "Adult";
//     } else {
//         return "Senior";
//     }
// }

// int main() {
//     int age;
//     cout << "Enter age: ";
//     cin >> age;
//     cout << categorizeAgeIfElse(age) << std::endl;
//     return 0;
// }

// q-33
// #include<iostream>
// using namespace std;

// bool check(int year){
//     if(year%100==0){
//         return true;
//     }
//     return false;
// }
// int main(){
//     int year=2002;
//     cout<<check(year)<<endl;
// }

// method-2
// #include<iostream>
// using namespace std;
// string cent(int year){
//     return (year%100==0)?"century":"notcentury";
// }
// int main(){
//     int year=2002;
//     cout << cent(year) << endl;
//     return 0;
// }


// q-34
// #include<iostream>
// using namespace std;
// void check(int arr[],int n){
    
//     for(int i=0;i<n;i++){
//         if(i==0 || i==n-1){
//             cout << arr[i] << endl;
//         }
//     }
// }
// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     check(arr,n);
//     return 0;
// }

// method-2
// #include<iostream>
// using namespace std;

// void check(int* arr, int n) {
//     cout << *arr << endl;         
//     cout << *(arr + n - 1) << endl; 
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     check(arr, n);
//     return 0;
// }


// method-3
// #include<iostream>
// using namespace std;

// void check(int arr[], int n, int i = 0) {
//     if (i == 0) {
//         cout << arr[i] << endl; 
//     }
//     if (i == n - 1) {
//         cout << arr[i] << endl; 
//     }
//     if (i < n - 1) {
//         check(arr, n, i + 1); 
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     check(arr, n);
//     return 0;
// }




// q-35
// #include <iostream>
// using namespace std;

// int main() {
//    int n=5;
//    for(int i=5;i>=0;i--){
//        for(int j=1;j<i;j++){
//            cout<<"*";
//            continue;
//        }
//        cout << endl;
//    }
//     return 0;
// }


// method-2
// #include<iostream>
// using namespace std;

// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         cout << string(n-i,'*') << endl;
//     }
//     return 0;
// }


// method-3
// #include <iostream>
// using namespace std;

// void printStars(int n, int i) {
//     if (i == n) return; 

//     for (int j = 0; j < n - i; j++) {
//         cout << "*";
//     }

//     cout << endl; 
//     printStars(n, i + 1);
// }

// int main() {
//     int n;
//     cout << "Enter number of rows: ";
//     cin >> n; 

//     printStars(n, 0);

//     return 0;
// }

// q-36
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         string row="";
//         row += string(n-i-1,' ');
//         row+=string(2*i+1,'*');
//         cout << row << endl;
//     }
//     return 0;
// }


// method-2
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//         cout <<" ";
//         }
//         for(int k=0;k<2*i+1;k++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// method-3
// #include<iostream>
// using namespace std;
// void pyramid(int n,int i){
//     if(i==n) return;
//     for(int j=0;j<n-i-1;j++){
//     cout << " ";
//     }
//     for(int k=0;k<2*i+1;k++){
//         cout << "*";
//     }
//     cout << endl;
//     pyramid(n,i+1);
// }

// int main(){
//     int n=5;
//     pyramid(n,0);
//     return 0;
// }



// q-37














// leetcode  709
// class Solution {
// public:
//     string toLowerCase(string s) {
//      for (int i=0;i<=s.length();i++){
//         if(s[i]>64 && s[i]<91){
//             s[i]+=32;
//         }
//      }   
//      return s;
//     }
// };


// method2
// class Solution {
// public:
//     string toLowerCase(string s) {
//      for (char& c : s) {
//             c = tolower(c); 
//         }  
//      return s;
//     }
// };




// leetcode 344
// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         vector <char> str(s.size());
//         for (int i=s.size()-1;i>=0;i--){
//             str[s.size()-1-i]=s[i];
//         }
//         s=str;
//     }
// };

// method2
// #include<iostream>
// using namespace std;
// int main(){
//     char arr[]={'h','e','l','o'};
//     int left=0;
//     int right=sizeof(arr)-1;
//     while(left<right){
//         swap(arr[left],arr[right]);     
//         left++;
//         right--;
//     }
//     cout<<arr<<endl;
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





// leetcode 283
// Online C++ compiler to run C++ program online
// #include <iostream>
// #include<vector>

// using namespace std;


// int main() {
// vector<int> arr={0,1,0,5,6};
// int count=0;
// vector<int> nonzero={};
//  for (int i=0;i<arr.size();i++){
//      if(arr[i]!=0){
//          nonzero.push_back(arr[i]);
//      }else{
//          count++;
//      }
//  }
// for (int i = 0; i < count; ++i) {
//     nonzero.push_back(0);
// }

// for(int i=0;i<nonzero.size();i++){
//     cout << nonzero[i] << " ";
// }

//     return 0;
// }


// leetcode-48
// matrix=[[1,2,3],[4,5,6],[7,8,9]];
// let arr = Array.from({ length: 3 }, () => Array(3).fill(0));
// matrix=matrix.reverse();

// for(let i=0;i<3;i++){
//     for(let j=0;j<3;j++){
//         arr[i][j]=matrix[3 -j-1][i];
//     }
// }
// arr = arr.map(row => row.reverse());
// console.log(arr)
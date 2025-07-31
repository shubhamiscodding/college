// 1. Write a function to add 5 user-input integers to a std::vector<int> using push_back and print the vector.

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec;
//     int len;
//     cout << "enter the len : ";
//     cin >> len;
//     int num;
//     for(int i=0;i<len;i++){
//         cout << "enter the value of " << i << "th index : ";
//         cin >> num;
//         vec.push_back(num);
//     }
//     for(int i:vec){
//         cout << i <<" ";
//     }
//     return 0;
// }

// 2.Create a function to print all elements of a std::vector<std::string> using a range-based for loop.
#include<iostream>
#include<vector>
using namespace std;

void print(vector<string> vec){
    for(string i:vec){
        cout << i <<" ";
    }
    cout << endl;
}
int main() {
    vector<string> strVec = {"Hello", "World", "This", "Is", "C++"};
    print(strVec);
    return 0;
}

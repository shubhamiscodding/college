// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,9,8,5,2,8,4,2,6};
    
    
    
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     int smallest = arr[0];
//     int largest = arr[0];

//     for (int i = 1; i < n ; i++) {
//         if (arr[i] < smallest)
//             smallest = arr[i];
//         if (arr[i] > largest)
//             largest = arr[i];
//     }
    
//      cout << smallest << endl;
//     cout << largest << endl;
// }


// void reversearr(int arr[], int n){
//     int left =0;
//     int right = n-1;
    
//     while(left<right){
//         int temp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = temp;
//     }
// }



// #include <iostream>
// #include <climits>  
// using namespace std;


// int  findSecondLargest(int arr[], int n){
//     int first = INT_MIN;
//     int second = INT_MIN;
    
//     for(int i=0; i<n; i++){
//         if(arr[i]>first){
//             second = first;
//             first = arr[i];
//         }
//         else if(arr[i] > second && arr[i] != first){
//             second = arr[i];
//         }
//     }
    
//     if (second == INT_MIN)
//         cout << "No second largest element (all elements are equal)." << endl;
//     else
//         cout << "Second largest element: " << second << endl;

//     return second;
// }



// int main() {
//     int arr[] = {10, 20, 4, 45, 99, 99};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     findSecondLargest(arr, n);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void moveZeroes(int arr[], int n) {
//     int j = 0;  

//     for (int i = 0; i < n; i++) {
//         if (arr[i] != 0) {
            
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//             j++;
//         }
//     }
// }

// int main() {
//     int arr[] = {0, 1, 0, 3, 12};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     moveZeroes(arr, n);

    
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// #include<vector>

// int main(){
//     vector<int> arr={1,2,4,5,6};
//     int min = arr[0];
//     int max = arr[0];
//     int n = arr.size();
//     int sum = 0;
//     for(int num : arr){
//         sum += num;
//         if(max < num){
//             max = num; 
//         }
//         if(min > num){
//             min = num;
//         }
//     }
//     long long actual =(long long)(max-min+1)*(max-min)/2;

//     cout << "exepected sum of the array : " << actual << endl;
//     cout << "actual sum of the array : " << sum << endl;
//      cout << "missing num in the array is : " << sum - actual << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// #include<string>

// int main(){
//     string str = "shubham";
//     bool pali = true;
//     int i = 0;
//     int j = str.length()-1;
//     while(i < j){
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;

//         if(str[i] != str[j]) pali = false; break;
//         i++;
//         j--;
//     }

//     if(pali == true) cout << "IS palidrom." << endl;
//     else cout << "NOT palidrom" << endl;

//     cout << str << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// #include<string>
// #include<unordered_map>

// int main(){
//     string str = "aaabcc";
//     unordered_map<int,int> freq;

//     for(int i=0;i<str.size();i++){
//         freq[str[i]]++;
//     }

//     for(pair<char,int> pair : freq){
//         cout << (char)pair.first << " : reapetes again : " << pair.second << endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// #include<vector>

// int main(){
//     int arr[] = {1,2,2,3,4,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int i = 0;
//     for(int j=1;j<n;j++){
//         if(arr[j] != arr[i]){
//             i++;
//             // arr[i] = arr[j];
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }
//     for(int k=0;k<i+1;k++){
//         cout << arr[k] << " ";
//     }
//     return 0;
// }



#include<iostream>
#include<set>
using namespace std;

int main(){
    int arr[] = {5,7,1,4,2,9,11};
    int target = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    set<int> m;
    for(int i=0;i<n;i++){
        int diff = target - arr[i];
        if(m.find(diff) != m.end()){
            cout << "pair found : " << arr[i] << " , " << diff << endl;
        }
        m.insert(arr[i]);
    }
    return 0;
}
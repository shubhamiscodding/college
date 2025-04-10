// // vector oprations
// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> vec= {8,3,6,2};
    
//     vec.push_back(75);
//     for(int num : vec){
//         cout << num << " " ; 
//     }
//      cout << endl;
//     vec.pop_back();
//     for(int num : vec){
//         cout << num << " " ; 
//     }
//     cout << endl;
//     vec.insert(vec.end()-1,100);
//     for(int num : vec){
//         cout << num << " " ; 
//     }
//     cout << endl;
//     vec.erase(vec.begin()+5);
//     for(int num : vec){
//         cout << num << " " ; 
//     }
//     cout << endl;
//     cout << "Size of vec : " << vec.size();
//     cout << endl;
//     cout << "first of vec : " << vec.front();
//     cout << endl;
//     cout << "last of vec :" <<  vec.back();
//     cout << endl;
//     cout << "checked : " << vec.empty();
    
//     cout << endl;
//     cout << endl;
    
//     vec.insert(vec.begin()+3,9);
//     vec.pop_back();
//      cout << "first element: " << vec.front() << " :: ";
//     for(int num : vec){
//         cout << num << " " ; 
//     }
//     cout << "::" << vec.at(3);
//     return 0;
// }



// // list operations
// int list(){
// list<int> li = {10, 20, 30};
//     // with the auto syntax
//     auto pos=li.begin();
//     advance(pos,3);
//     li.insert(pos,150);
//     cout << "with the auto : ";
//      for(int num : li){
//         cout << num << " " ; 
//     }
//     cout << endl;
//     // without auto syntax
//     list<int>::iterator po = li.begin();
//         advance(po,3);
//     li.insert(po,1009);
//     cout << "without the auto : ";
//      for(int num : li){
//         cout << num << " " ; 
//     }
//     cout << endl;
//     li.push_back(1);
//     li.push_front(5);
//     li.pop_back();
//     li.pop_front();
//     li.reverse();
//     li.sort();
//     for(int num : li){
//         cout << num << " " ; 
//     }
//     return 0;
// }

// // deque operations
// int deque(){
//     deque<int> de = {10, 20, 30};

//     de.push_back(1);
//     for(int num : de){
//         cout << num << " " ; 
//     }
//     cout << endl;
//     de.push_front(5);
//     for(int num : de){
//         cout << num << " " ; 
//     }
//     cout << endl;
//     de.pop_back();
//     for(int num : de){
//         cout << num << " " ; 
//     }
//     cout << endl;
//     de.pop_front();
//     for(int num : de){
//         cout << num << " " ; 
//     }
//     cout << endl;
//     cout << de.at(2);

// return 0;
// }  


// // array operations 








#include <iostream>
using namespace std;
#include <list>
#include <deque>
#include <string>

int main() {
    list<int> li={8,7,3,2,3,6,8};
    li.sort();
    li.unique();
    for(int nums : li ){
        cout << nums << " ";
    }
    
    cout << endl;
    string str = "bba";
    int count=0;
    deque<char> dq(str.begin(), str.end());
    for(int i=0 ; i<dq.size(); i++){
        if(dq[i]==dq[dq.size()-i]){
            count++;
        }
    }
    if(count >> 0){
        cout << "ispalideom" << " ";
    }else{
        cout << "not palideom" << " ";
    }
     bool ok = false;
    while (dq.size() > 1) {
        if (dq.front() == dq.back()) {
            dq.pop_front();
            dq.pop_back();
            ok = true;
        } else {
            ok = false;
            break;
        }
    }

    if (ok || dq.size() <= 1) {
        cout << "true";  
    } else {
        cout << "false"; 
    }
       cout << endl;
    
    string str1="hello";
    list<char> lst(str1.begin(), str1.end());
    lst.sort();
    string strans(lst.begin(), lst.end());
    cout << strans ;
    cout << endl;
    
    
    
    return 0;
}
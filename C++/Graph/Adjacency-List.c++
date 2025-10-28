// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<vector>

int main() {
    int edge , vertices;
    cout << "enter row and col :";
    cin /*>> edge*/ >> vertices;
    cout << endl;
    
    vector<int> addList[vertices];
    // vector<pair<int,int>> addList[vertices];
    
    int u , v;
    // int num;  //weighted nums
    for(int i=0;i<vertices;i++){
        cin >> u >> v ;
        // cin >> num ;
        cout << endl;
        addList[u].push_back(v);
        addList[v].push_back(u);
        // addList[u].push_back({v,num}); //weigthed 
        // addList[v].push_back({u,num});
    }
    cout << endl;
    
      cout << "\nAdjacency List:" << endl;
    for (int i = 0; i < vertices; i++) {
        cout << i << " -> ";
        for (int neighbor : addList[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    
    
    return 0;
}
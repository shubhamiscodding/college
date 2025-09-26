// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;




int main() {
    int row , col;
    cout << "enter row and col :";
    cin >> row >> col;
    cout << endl;
    
    vector<vector<int>> matrix(row,vector<int>(col,0));

    // matrix lsit
    
    int u , v;
    // int num;  //weighted nums
    for(int i=0;i<col;i++){
        cin >> u >> v ;
        // cin >> num ;
        cout << endl;
        matrix[u][v] = 1;
        // matrix[v][u] = num;   //bi directional
    }
    cout << endl;
    
    for(int i =0; i<row;i++){
        for(int j =0; j<col;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
     int n,m;
     cout << " enter N & M : "; 
     cin >> n >> m;
    int arr[n][m];
    int ans[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];

        }
    }
    
    // // cout << arr.size << endl;
    // // cout << arr.size();
    // cout << " output : " << endl;
    // // for(int i=0;i<n;i++){
    // //     for(int j=0;j<n;j++){
    // //         if(i == n - j -1){
    // //             cout << arr[i][j] << " ";
    // //             break;
    // //         }
    // //     }
    // // }
    
    
    // int i=0,j=n-1;
    // while(i<n && j>=0){
    //     cout << arr[i][j] << "  ";
    //     i++;
    //     j--;
    // }
    
    

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         ans[j][i] = arr[i][j];
    //     }
    // }
    
  
    // cout << " output : " << endl;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout << ans[i][j] << " ,";
    //     }
    //     cout << endl;
    // }
    
    
    // cout << " output : " << endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(i == n - j -1 || i == 0 || i == 0 || i == n-1){
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[j][i] = arr[n-i-1][j];
        }
    }
    
  
    cout << " output : " << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << ans[i][j] << "  ";
        }
        cout << endl;
    }
    
    
    return 0;
}
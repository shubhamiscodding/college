#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,8,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
 
    
    for(int i=0; i<len; i++){
        if(arr[i] <= arr[i-1]){
            count = count + 1;
        }
    }
    if(count == 0){
        printf("Yes");
    }else{
        printf("No");
    }
    

return 0;
}
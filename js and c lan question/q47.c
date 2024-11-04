// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int arr[]={1,5,2,3,5,6,3};
 int len=sizeof(arr)/sizeof(arr[0]);
for (int i=0;i<len;i++){
    for (int j=i+1;j<len;j++){
        if(arr[i]==arr[j]){
            printf("%d",arr[i]);
           
        } 
    } 
}
    return 0;
}
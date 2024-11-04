#include <stdio.h>
#include <string.h>
int main() {
int arr[]={1,4,5,8,6,3,2};
int temp;
int len=sizeof(arr)/sizeof(arr[1]);
    for(int j=0;j<len;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

int diff=arr[len]-arr[0];
printf("%d",diff);
    return 0;
}  
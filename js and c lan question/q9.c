#include <stdio.h>
#include <string.h>
int main() {
int arr[]={1,4,5,8,6,9,3,2};
int temp;
int len=sizeof(arr)/sizeof(arr[1]);
for(int i=0;i<len;i++){
    for(int j=0;j<len;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
for(int i=0;i<len;i++){
    printf("%d\n",arr[i]);
}
    return 0;
}
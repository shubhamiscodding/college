#include <stdio.h>

int main() {
    int arr[7]={1,2,3,4,5};
    arr[5]=6;
    int len=sizeof(arr)/sizeof(arr[1]);
    for(int i=0; i<len;i++){
    printf("%d",arr[i]);
    }
    return 0;
}
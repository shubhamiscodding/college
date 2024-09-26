#include <stdio.h>

int main() {
    int arr[7]={1,2,3,4,5};
    int narr[0]=6;
    int len=sizeof(arr)/sizeof(arr[1]);
    for(int i=0; i<len;i++){
    narr[i+1]=arr[i];
    printf("%d",narr);
    }
    return 0;
}
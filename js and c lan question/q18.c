#include <stdio.h>
#include <string.h>
int main() {
int arr[]={1,2,3,4,5,6};

int len=sizeof(arr)/sizeof(arr[1]);
for(int i=0;i<len;i+=2){
    printf("%d",arr[i]);
}
    return 0;
}
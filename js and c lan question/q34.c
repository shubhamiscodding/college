#include <stdio.h>

int main() {
 int arr[]={10,20,30,40,50};
 int len=sizeof(arr)/sizeof(arr[0]);
 printf("%d\n",arr[0]);
 printf("%d",arr[len-1]);
    return 0;
}
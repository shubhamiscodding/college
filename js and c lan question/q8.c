// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
int arr[]={1,2,3,4,5};
int avg=0;
int len=sizeof(arr)/sizeof(arr[1]);
for(int i=0;i<len;i++){
    avg=avg+arr[i];
}
avg=avg/len;
printf("%d",avg);

    return 0;
}
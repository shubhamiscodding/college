// Online C compiler to run C program online
#include <stdio.h>

int main() {
int arr[]={1,2,8,8,8,8,8,8,8,8,5};
int len=sizeof(arr)/sizeof(arr[0]);
int i=0;
while(i<len){
    if(arr[i]==8){
        printf("starting point is :%d\n",i);
        break;
    }
    i++;
}
int j=0;
while(j<len){
    if(arr[j]==8 && arr[j+1]!=8){
        printf("Ending point is :%d",j);
    }
    j++;
}
    return 0;
}
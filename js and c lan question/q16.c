#include <stdio.h>
#include <string.h>
int main() {
int arr[]={1,2,3,4,5,6};
int count=0;
int len=sizeof(arr)/sizeof(arr[1]);
for(int i=0;i<len;i++){
    if(arr[i]<0){
        count++;
    }
        
    }
if(count!=0){
    printf("false");
}
else{
    printf("true");
}

    return 0;
}
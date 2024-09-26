#include <stdio.h>
int main(){
int arr[]={1,2,3,4,5};
int count=0;
int sum=0;
int len=sizeof(arr)/sizeof(arr[1]);
for(int i=0;i<len;i++){
    if(arr[i]%2==0){
        count++;
    }
    else{
        sum++;
    }
}
printf("even =%d ,odd =%d",count,sum);
return 0;
}
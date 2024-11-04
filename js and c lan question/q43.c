// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int arr[]={1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3};
   int sum=0;
   int maxcount=0;
   int len=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<len;i++){
       if(arr[i]==1){
           sum++;
       }else{
           if(sum>maxcount){
           maxcount=sum;}
           sum=0;
       }
   }printf("%d",maxcount);
    return 0;
}
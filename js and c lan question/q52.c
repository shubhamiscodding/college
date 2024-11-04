// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int arr[]={1,2,4,5,6};
  int sum=0;
  int len=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<len;i++){
      sum=sum+arr[i];
      arr[i]=sum;
      printf("%d\n",arr[i]);
  }

    return 0;
}
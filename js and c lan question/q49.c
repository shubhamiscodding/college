// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int arr[]={1,2,3,1,2,4};
  int len=sizeof(arr)/sizeof(arr[0]);
  printf("give two index number which you want to remove: ");
  int n1;
  int n2;
  scanf("%d%d",&n1,&n2);
  for(int i=0;i<len;i++){
      if(i==n1 || i==n2){
          continue;
      }
      printf("%d",arr[i]);
  }
    return 0;
}
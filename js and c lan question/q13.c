
#include <stdio.h>
int main() {
  int arr[]={1,2,4,5};
  int find=0;
  int len=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<len;i++){
      if(arr[i]==3){
         find=1;
      }
  }
  if(find==1){
      printf("true");
  }
  else{printf("false");}
  return 0;
}
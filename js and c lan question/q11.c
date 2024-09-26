#include <stdio.h>

int main() {
  int arr[]={1,2,2,3,4,4,5};
  int narr[len];
  int len=sizeof(arr)/sizeof(arr[1]);
  for(int i=0;i<len;i++){
    for(int j=0;j<len;j++){
        if(arr[i]!=arr[j]){
            narr[i]=arr[i];
        }
    }
  }
    return 0;
}
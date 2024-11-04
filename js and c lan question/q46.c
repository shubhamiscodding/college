// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char a[]="shubhamiscodding";
    int len=sizeof(a)-1;
  for(int i=0;i<len;i++){
      for (int j=i+1;j<len;j++){
          if (a[i]==a[j]){
            printf("%d ,%d\n",i,j);       
          }
      }
  }

    return 0;
}
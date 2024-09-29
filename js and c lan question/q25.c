// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
   char a[]= " hello ";
   char b[]={};
   int len = sizeof(a)-1;
   for (int i=0;i<len;i++){
       b[i]=a[i];
       printf("%c\n",b[i]);
   }
    return 0;
}


// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
   char str[]="codding";
   int len =strlen(str);
   for(int i=0;i<len;i++){
       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='u' || str[i]=='o'){
          continue;
       }printf("%c",str[i]);
   }
    return 0;
}
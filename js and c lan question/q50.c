// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
char str[]="shubhamiscodding";
int count=0;
int len =strlen(str);
for(int i =0;i<len;i++){
    if(str[i]=='d'){
        count++;
    }
}
printf("%d",count);
    return 0;
}
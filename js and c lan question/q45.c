// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char a[]="shubhamiscodding love coding progrram in javascript.";
    int len=sizeof(a)-1;
    int count=0;
    int max=0;
    for(int i=0;i<len;i++){
        if(a[i]!=32){
            count++;
        }else{
            if (max<count){
                max=count;
            }
            count=0;
        }
    }
    printf("%d",max);
    return 0;
}
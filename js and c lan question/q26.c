// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
char a[]="codinggita";
int len=sizeof(a)-2;
if(a[len]=='a'){
    printf("true");
}else{
    printf("false");
}
    return 0;
}
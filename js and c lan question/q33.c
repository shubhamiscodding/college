#include <stdio.h>

int main() {
    int year;
    printf("enter the num:");
    scanf("%d",&year);
    if(year%100==0){
        printf("it's century");
    }else{
        printf("error");
    }
    return 0;
}
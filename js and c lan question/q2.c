#include <stdio.h>

int main() {
  int num;
printf("enter the num");
scanf("%d",&num);
if(num>0){
    printf("num is the positive");
}
else if(num==0){
    printf("your num is zero");
}else{
    printf("num is negative");
}
    return 0;
}
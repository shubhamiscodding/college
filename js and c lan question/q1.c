#include <stdio.h>

int main() {
int sco;
printf("enter your marks :");
scanf("%d",&sco);
if(sco>=90 && sco<=100){
    printf("your gred is A");
}else if(sco<90 && sco>=80){
    printf("your gred is B");
} else if(sco<80 && sco>=70){
    printf("your gred is C");
}else if(sco<70 && sco>=60){
    printf("your gred is D");
}else{
    printf("you are fail");
}
    return 0;
}
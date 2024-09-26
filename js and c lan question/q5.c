// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int age;
printf("enter your age:");
scanf("%d",&age);
if(age>=18){
    printf("you are eligible to vote");
}
else {
    printf("try next year");
}
    return 0;
}
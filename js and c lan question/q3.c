#include <stdio.h>

int main() {
 int s1;
int s2;
int s3;
printf("enter three sides of tringls :");
scanf("%d %d %d",&s1,&s2,&s3);
if(s1==s2==s3){
    printf("tringle is euilateral");
}
else if(s1==s2 || s2==s3 || s3==s1){
    printf("your tringle is isoscales");
}
else{
    printf("your tringle is scalene");
}
    return 0;
}
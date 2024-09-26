// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
char color[100];
printf("enter color:");
scanf("%s",&color);
if  (strcmp(color, "red") == 0){
    printf("stop");
}
else if  (strcmp(color, "yellow") == 0){
    printf("slow down");
}
else if (strcmp(color, "green") == 0){
    printf("go");
}
else{
    printf("error");
}
    return 0;
}
#include <stdio.h>

int main() {
int star;
int end;
printf("enter the starting point:");
scanf("%d",&star);
printf("enter the ending point:");
scanf("%d",&end);
for (int i=star;i<=end;i++){
    printf("%d,",i);
}
    return 0;
}
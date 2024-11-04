#include <stdio.h>

int main() {
int num;
printf("enter the num:");
scanf("%d",&num);
for(int j=num;j>0;j--){
for (int i=num;i>0;i--){
    printf("*");
} printf("\n"); num--;
}
    return 0;
}

// or
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for (int j =1; j <=num; j++) {
        for (int i = 1; i <= j; i++) {
            printf("*");
        }
        printf("\n");
    }
 return 0;   
}
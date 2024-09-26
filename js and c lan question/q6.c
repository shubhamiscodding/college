// Online C compiler to run C program online
#include <stdio.h>

int main() {
char id[30];
int pass;
char nid[]="admin";
int npass=1234;
printf("enter id name\n");
scanf("%s",&id);
printf("enter your pass:\n");
scanf("%d",&pass);
if(strcmp(id, nid) == 0 && strcmp(pass,npass) ==0){
    printf("login sucssesfully");
}else{
    printf("wrong");
}
    return 0;
}
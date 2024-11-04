#include <stdio.h>
#include <string.h>

int main() {
    char id[30];
    int pass;
    char nid[] = "admin";
    int npass = 1234;

    printf("Enter ID name:\n");
    scanf("%s", id); 
    printf("Enter your pass:\n");
    scanf("%d", &pass);

    if (strcmp(id, nid) == 0 && pass == npass) {
        printf("Login successfully\n");
    } else {
        printf("Wrong\n");
    }

    return 0;
}

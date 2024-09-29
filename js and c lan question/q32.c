#include <stdio.h>
#include <string.h>

int main() {
    char str[] = " sjubham ";
    char nstr[100] = "";
    int j = 0; 
    int num = strlen(str);

    for (int i = 0; i < num; i++) {
        if (str[i] != ' ') {  
            nstr[j++] = str[i]; 
        }
    }

    nstr[j] = '\0';  
    printf("%s", nstr);

    return 0;
}

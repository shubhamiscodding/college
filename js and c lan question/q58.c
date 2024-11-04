#include <stdio.h>
#include <math.h>  // Include this for the pow function

int main() {
    int num = 100;
    for (int i = 1; i < num; i++) {
        if (pow(4, i) == num) {  
            printf("true\n");
        }else{printf("false");
        break;}
    }
    return 0;
}                                           

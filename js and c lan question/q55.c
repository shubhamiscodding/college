#include <stdio.h>
#include <math.h>  // Include this for the pow function

int main() {
    int num = 27;
    for (int i = 1; i < num; i++) {
        if (pow(3, i) == num) {  
            printf("true\n");
        }
    }
    return 0;
}                                           

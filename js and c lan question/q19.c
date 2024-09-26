#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int narr[100];  
    int temp;

for (int i = 0; i < len; i++) {
        narr[i] = arr[i];
}

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (narr[j] > narr[j + 1]) {
                // Swap the elements in narr[]
                temp = narr[j];
                narr[j] = narr[j + 1];
                narr[j + 1] = temp;
            }
        }
    }
}
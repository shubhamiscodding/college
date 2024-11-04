#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);  
    int narr[len];  
    int k = 0; 
    for (int i = 0; i < len; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i] == narr[j]) {
                isDuplicate = 1; 
                break;
            }
        }
        if (isDuplicate==0) {
            narr[k] = arr[i];
            k++; 
        }
    }
    for (int i = 0; i < k; i++) {
        printf("%d ", narr[i]);
    }
    printf("\n");
    return 0;
}

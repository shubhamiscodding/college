#include <stdio.h>

int main() {
    char bre[] = "{[]}";
    int size = sizeof(bre) - 1;

    for (int i = 0; i < size; i++) {
        int matchFound = 0;
                for (int j = i + 1; j < size; j++) {
            if ((bre[i] == '(' && bre[j] == ')') ||
                (bre[i] == '{' && bre[j] == '}') ||
                (bre[i] == '[' && bre[j] == ']')) {
                printf("Matching brackets found: %c %c\n", bre[i], bre[j]);
                matchFound = 1;
                break;
            }
        }
        if (matchFound==0) {
            printf("No matching bracket for: %c\n", bre[i]);
        }
    }
    return 0;
}

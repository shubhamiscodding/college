#include <stdio.h>

int main() {
char word[]="hello";
for(int i=0;i<sizeof(word);i++){
    printf("%c",word[i]-32);
}
    return 0;
}
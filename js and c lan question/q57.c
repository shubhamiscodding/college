// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[]={2,5,4,3,6};
        int len =sizeof(arr)/sizeof(arr[0]);
    char *str[len];

    for(int i=0;i<len;i++){
        switch (i){
            case 0: str[i]="gold";break;
            case 1:str[i]="silver";break;
            case 2:str[i]="brounze";break;
            default:str[i]="i";break;
        }
         printf("%s\n\n",str[i]);
    }
    return 0;
}
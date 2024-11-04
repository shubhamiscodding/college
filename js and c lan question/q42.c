#include <stdio.h>

int main() {
int arr[]={1,9};
int arr2[]={1,9};
if(arr[0]<=arr2[0] && arr[1]>=arr2[0] && arr[1]>=arr2[1] && arr[0]<=arr2[0]){
    printf("true");
}else{printf("false");}
    return 0;
}
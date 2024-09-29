// Online C compiler to run C program online
#include <stdio.h>

int main() {
int arr[]={21,2,15,7};
int sum=9;
int len =sizeof(arr)/sizeof(arr[1]);
for(int i=0;i<len;i++){
    for (int j=i+1;j<len;j++){
        if(arr[i]+arr[j]==sum){
            printf("%d\n%d",j,i);
        }
    }
}
    return 0;
}
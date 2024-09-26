// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
int arr[]={1,2,3,4,5,6};
int count=0;
int sum=0;
int len=sizeof(arr)/sizeof(arr[1]);
for(int i=0;i<len;i++){
    if(arr[i]<0){
        count++;
    }else{sum++;}
}
printf("negtive numn is %d\n",count);
printf("positive  numn is %d",sum);
    return 0;
}
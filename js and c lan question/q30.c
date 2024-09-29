#include <stdio.h>
#include <math.h>

int main() {
int num=221212121;
int i=num;
int sum=0;
int odd=0;
num=i;
while(num != 0){
    num=i;
    num=num%10;
    if(num%2==0){
        sum=sum+num;
    }else{odd=odd+num;}
    i=i/10;
}printf("sum of even num %d\n",sum);
printf(" sum of odd num %d",odd);
    return 0;
}
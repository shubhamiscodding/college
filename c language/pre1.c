#include <stdio.h>
#include <string.h>

int main() {
// 1
    printf("Hello World\n");
// 2
    printf("%d\n",3+8);    
// 3
    int a=2,b=8,c=5;    
    if(a>b && a>c){
        printf("%d\n",a);
    }else if(b>a && b>c){
         printf("%d\n",b);
    }else if(c>a && c>b){
         printf("%d\n",c);
    }
 // 4
    
    int num=4;
    
    if(num%2==0){
        printf("The number %d is even.\n",num);
    }else{
        printf("The number %d is odd.\n",num);
    }    
// 5 
    int fact=5,ini=1;
    
    for(int i=1;i<=fact;i++){
        ini=ini*i;
    }
    printf("%d\n",ini);
// 6
    char str[]="hello";
    int length=strlen(str);
    char rev[length+1];
    for (int w=length-1;w>=0;w--){
        rev[length-w-1]=str[w];
    }
    printf("%s",rev);
// 7
        char str[]="madam";
    int length=strlen(str);
    char rev[length+1];
    for (int w=length-1;w>=0;w--){
        rev[length-w-1]=str[w];
    }
    if(rev==str){
        printf("is pallidrom");
    }else{
        printf("is not palidrom");
    }
// 8
    char array[]={4,5,-2,-5,6,2,4,1,8};
int smallest=array[0];
for(int i=1;i<strlen(array);i++){
        if(smallest>=array[i]){
            smallest=array[i];
            
        } 
}
printf("\n %d",smallest);
// 9
 

    return 0;
}
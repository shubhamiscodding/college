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
 const char str[] = "hello world";
    const char substr[] = "world";
for(int i=0;i<=strlen(str);i++){
    for(int j=0;j<=strlen(substr);j++){
        if(str[i+j]!=substr[j]){break;}
        if(j==strlen(substr)){printf("true");}
    }
}
// 11
int array[]={1,2,3,4,5};
     int length=sizeof(array);
     int sum=0;
for (int i=0;i<5;i++){
    sum=sum+array[i];
}printf("%d",sum);
// 12
int num=5;
int n1=0;
int n2=1;
int sum;
for(int i=1;i<=num;i++){
    printf("\n %d",n1);
    sum=n1+n2;
    n1=n2;
    n2=sum;
}
// 13
int pnum=22;
int count=0;
for(int i=2;i<pnum;i++){
    if(pnum%i==0){
        count++;
    }
}
if(count==0){printf("is prime num");}
else{printf("is not prime num");}
// 14
char string[100]; 
scanf("%s",&string);
int sum=0;
int i;
for (i=0;i<strlen(string);i++){
    char c=string[i];
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        sum++;
    }
}
printf("\n %d",sum);
// 15

    return 0;
}

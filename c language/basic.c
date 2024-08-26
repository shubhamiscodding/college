#include <stdio.h>
#include <string.h>
int main() {
    char mystring[] = "nothing" ;
    char we='w';
    int age =19;
    float favnum=12.12122;
    // Write C code here
    printf("shubham modi\n");
    printf("%d \n %f",age,favnum);
    printf("\n %c",we);
    printf("\n %s",mystring);
    char one[]="abc";
    printf("\n %d",strlen(one));
    char two[]="y";
    strcat(one,two);
    printf("\n %s \n",one);
    int i=3;
    for(i=2;i>=0;i--) {
        printf("%c",one[i]);
    }
    
    return 0;
}
int main() {
    int i=0;
   for(i=0;i<=9;i++) {
       printf("%d",i);
   }
   printf("\n");
   int x=0;
   while(x<=10) {
       printf("%d",x);
       x=x+2;
   }
    printf("\n");
   int age =19;
   if(age>18) {
       printf("above 18");
   }
   else if (age==18) {
       printf("18 year old");
   }
   else{
       printf("try next year");
   }
   int a=12;
//   char c[]="shubham";
   int b=15;
//   int p=a+c;
   float q=a+b;
   int w=a-b;
   int e=a*b;
   int r=a/b;
  int t=a%b;
   printf("\n %f \n %d \n %d  \n %c \n %d",q,w,e,r,t);
float z=8.2;
int m=2;
float v=z/m;
printf("\n \n \n %f",v);
    return 0;
}
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

























#include <stdio.h>

int main() {
// 6 reverse the num,
    int a, reversed = 0;
    printf("Enter the number: ");
    scanf("%d", &a);

    int original = a; // Store the original number for comparison

    while (a != 0) {
        reversed = reversed * 10 + a % 10;
        a /= 10;
    }
printf("%d\n\n",reversed);
// 7 palidrom
    if (original == reversed) {
        printf("\n%d is a palindrome number\n", original);
    } else {
        printf("\n%d is not a palindrome number\n", original);
    }
// 9
  int num=13;
int count=0;
int i=0;
for(i=2;i<num;i++){
if(num%2==0){
    count++;
}
}
if(count==0){printf("is not prime mun");}
else{printf("is prime num");}
// 10
int num=5;
int a=0;
int b=1;
int c;
int i=0;
for(i=0;i<=num;i++){
    printf("\n%d",a);
    c=a+b;
    a=b;
    b=c;  
}

// 11
int a=80;
int b=100;
int i;
int gcd=1;
for (i=2;i<=a && i<=b;i++){
    if(a%i==0 && b%i==0){
        gcd=i;
    }
}printf("%d",gcd);
// 12
int a=10;
int b=20;
int x; 
int y;
int i;
int lcm=1;
for (i=2;i<=a && i<=b;i++){
    if(a%i==0 && b%i==0){
        lcm=i;
    }
}
x=a/lcm;
y=b/lcm;
printf("%d",lcm*x*y);
// 13
int year=1800;
    if(year%100==0 && year%400==0){
        printf("it is a leap year");
    }
else{printf("no");}
// 14
int num1,num2;
scanf("%d\n %d",&num1,&num2);
printf("a-b= %d\n",num1-num2);
printf("a+b= %d\n",num1+num2);
printf("a/b= %d\n",num1/num2);
printf("a*b= %d\n",num1*num2);
// 15
int arr[15]={1,2,4,5,6,8,9};
int i;
int len=sizeof(arr)/sizeof(arr[0]);
int sum=0;
for(i=0;i<len;i++){
    sum=sum+arr[i];
}
printf("%d",sum);
// 16
int arr[15]={1,2,4,5,6,8,9};
int i;
int len=sizeof(arr)/sizeof(arr[0]);
int max=arr[0];
for(i=0;i<len;i++){
    if(max<arr[i]){
    max=arr[i];
    }
}
printf("%d",max);
// 17
int len=sizeof(arr)/sizeof(arr[0]);    //or
  char A[]="hello";
  int len =sizeof(A)-1;
// 18
  char str[]="kcuf";
   int len=strlen(str);
   char newstr[len];
   int i;
   for (i=strlen(str);i>=0;i--){
       newstr[len-i-1]=str[i];
   }
   printf("%s",newstr);
//    19
   int a=1;
    int b=2;
a=a+b;
b=a-b;
a=a-b;
printf("%d\n",a);
printf("%d",b);
// 20
int f=1;
int g=2;
int v;
v=g;
g=f;
f=v;
printf("%d",f);
printf("%d",g);
// 21

// 22
float c=234;
float f;
printf("f= %.1f",(c * (9/5)) + 32);
// 23
float F=234;
float C;
printf("f= %.1f",(F - 32) * 5/9);

// 24
int sum=0;
int i;
int num=5;
for(i=0;i<=num;i++){sum+=i;}printf("%d",sum);
// 25
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
// 26

// 27
  int num;
    printf("enter the num:");
    scanf("%d",&num);
    int i;
    int count;
    while(num!=0){
        num=num/10;
        i++;
    }printf("%d",i);
// 28
 char str[]="kcuf";
   int len=strlen(str);
   char newstr[len];
   int i;
   for (i=strlen(str);i>=0;i--){
       newstr[len-i-1]=str[i];
   }
   printf("%s",newstr);
// 29
 char str1[]="manama";
 char str2[]="pamana";
 int asci;
 for(asci=97;asci<=122;asci++){
     if(str1[0]==asci && str2[0]==asci+1){
         printf("true");
         break;
     }else{
         printf("false");
         break;
     }
 }
// 30
int num;
    printf("enter the num:");
    scanf("%d",&num);
    int pow;
        printf("enter the power:");
    scanf("%d",&pow);
    int pnum=1;
    
    while(pow!=0){
        pow--;
        pnum=pnum*num;
    }
    printf("%d",pnum);
// 31
#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int num1 = 10;
    int num2 = 50;
    
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for (int i = num1; i <= num2; i++) {
        if (is_prime(i)) {
            printf("%d\n",i);
        }
    }
 return 0;
}
// 32  #include <math.h>
    int num, originalNum, remainder, result = 0, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (num != 0) {
        num /= 10;
        ++count;
    }

    num = originalNum;

    // Calculate the sum of the powers of digits
    while (num != 0) {
        remainder = num % 10;
        result += pow(remainder, count);
        num /= 10;
    }

    // Check if the result is equal to the original number
    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
     }
    // 33
    int arr[15]={1,2,4,5,6,8,9};
int i;
int len=sizeof(arr)/sizeof(arr[0]);
int sum=0;
for(i=0;i<len;i++){
    sum=sum+arr[i];
}
printf("%d",sum/2);
// 34
  int arr[]={1,2,4};
int t=0;
int len=sizeof(arr)/sizeof(arr[0]);
int max=arr[0];
int secondmax=arr[0];
for (t=0;t<len;t++){
if(max<arr[t]){
    max=arr[t];
   }
}
int p=0;
for(p=0;p<len;p++){
    if(secondmax<=arr[p]  && arr[p]!=max){
        secondmax=arr[p];
    }
}printf("%d",secondmax);
// 35
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    int i;
    for(i=1;i<=num;i++){
        if(num==i*i){
            printf("number is perfect squaer %d",num);
          return 0;
            }
    }
















    return 0;
}

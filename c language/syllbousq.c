//Q-1: Write a program to display “Hello Computer” on the screen.

	#include<stdio.h>
	#include<string.h>
	
	int main(){
		printf("Hello Computer\n");
		return 0;
	}
	
//Q-2: Write a C program to display Your Name, Address and City in different lines.

	#include<stdio.h>
	#include<string.h>
	
	int main() {

		char name[]="shubham";
		char address[]="adajan";
		char city[]="Surat";
		
		printf("Name: %s\n",name);
		printf("Address: %s\n",address);
		printf("City: %s\n",city);
	
		return 0;
	}
	
//Q-3: Write a C program to find the area of a circle using the formula: Area = PI * r.

	#include<stdio.h>
	
	int main(){
		
		double pi=3.14;
		double r=5;
		
		double area=pi*r;
		
		printf("Area of Circle = %.2lf\n",area);
		
		return 0;
	}
	
//Q-4: Write a C program to print the multiply, addition, division & subtraction value of two accepted numbers.

	#include<stdio.h>
	
	int main(){

		double num1=2;
		double num2=3;
		double num=num1+num2;
	
		printf("%.1lf + %.1lf = %.1lf\n",num1,num2,num);
		
		return 0;
	}
	
//Q-5: Write a C program to swap a variable value of no1 and no2.

	#include<stdio.h>
	
	int main(){
		
		int no1=3;
		int no2=2;
		int temp;
		
		temp=no1;
		no1=no2;
		no2=temp;
		
		printf("After swapping, First Number = %d\n",no1);
		printf("After swapping, Second Number = %d\n",no2);
		
		return 0;
	}
	
//Q-6: Write a program to find a maximum from given two numbers.

	#include<stdio.h>
	
	int main(){
		
		int n1=3;
		int n2=4;
		
		if(n1>n2){
			printf("The Maximum Number = %d\n",n1);
		}else{
			printf("The Maximum Number = %d\n",n2);
		}
		
		return 0;
	}
	
//Q-7: Write a program to find a minimum from given two numbers.

	#include<stdio.h>
	
	int main(){
		
		int n1=3;
		int n2=4;
		
		if(n1<n2){
			printf("The Minimum Number = %d\n",n1);
		}else{
			printf("The Minimum Number = %d\n",n2);
		}
		
		return 0;
	}
	
//Q-8: Write a program to find a maximum from given three numbers.

	#include<stdio.h>
	
	int main(){
		
		int n1=3;
		int n2=4;
		int n3=5;
		
		if(n1>n2 && n1>n3){
			printf("The Maximum Number = %d\n",n1);
		}else if(n2>n1 && n2>n3){
			printf("The Maximum Number = %d\n",n2);
		}else{
			printf("The Maximum Number = %d\n",n3);
		}
		
		return 0;
	}
	
//Q-9: Write a program to find a minimum from given three numbers. 

	#include<stdio.h>
	
	int main(){
		
		int n1=3;
		int n2=4;
		int n3=5;
		
		if(n1<n2 && n1<n3){
			printf("The Minimum Number = %d\n",n1);
		}else if(n2<n1 && n2<n3){
			printf("The Minimum Number = %d\n",n2);
		}else{
			printf("The Minimum Number = %d\n",n3);
		}
		
		return 0;
	}
	
//Q-10: Write a C program to print a multiplication table from 1 to 12.

	#include<stdio.h>
	
	int main(){
		
		int i,num=12;
		
		for(i=1;i<=10;i++){
			printf("%d * %d = %d\n",num ,i ,num*i);
		}
		
		return 0;
	}
	
//Q-11: Write a C program to find addition of 45 to 65 using loop.

	#include<stdio.h>
	
	int main(){
		
		int start=45;
		int end=65;
		int i,sum=0;
		
		for(i=start;i<=end;i++){
			sum=sum+i;
		}
		
		printf("The sum of range 45 to 65 = %d\n",sum);
		
		return 0;
	}
	
//Q-12: Write a C program to check whether a number is prime or not.

	#include<stdio.h>
	
	int main(){
		
		int num=3;
		int count,i;
		
		for(i=3;i<num;i++){
			if(num%i==0){
				count++;
			}
		}
		
		if(count>0 || num==2 || num==1){
			printf("%d is not a Prime Number.\n",num);
		}else{
			printf("%d is a Prime Number.\n",num);
		}
		
		return 0;
	}
	
//Q-13: Write a C program to show month using Switch statement.

	#include<stdio.h>
	
	int main(){
		
		int month=12;
		
		switch (month){
			case 1:
				printf("January");
				break;
			case 2:
				printf("February");
				break;
			case 3:
				printf("March");
				break;
			case 4:
				printf("April");
				break;
			case 5:
				printf("May");
				break;
			case 6:
				printf("June");
				break;
			case 7:
				printf("July");
				break;
			case 8:
				printf("August");
				break;
			case 9:
				printf("September");
				break;
			case 10:
				printf("October");
				break;
			case 11:
				printf("November");
				break;
			case 12:
				printf("December");
				break;
			default:
				printf("Invalid Month");
		}
		
		return 0;
	}
	
//Q-14: Write a C program to print the 3x3 array.

	#include <stdio.h>

	int main() {
	    
	    int arr[3][3] = {{0,1,3},{4,5,6},{7,8,9}};
		int i,j;
		
	    for(i=0;i<3;i++){
	        for(j=0;j<3;j++){
	            printf("arr[%d][%d]: %d  ",i,j,arr[i][j]);
	        }
	          printf("\n");
	    }
	    
	    return 0;
	}
	
//Q-15: Write C program to print range of 101 to 130 using array.

	#include<stdio.h>
	
	int main(){
		
		int i;
		
		for(i=101;i<=130;i++){
			printf("%d ",i);
		}
		printf("\n");
		
		return 0;
	}
	
//Q-16: Write a C program to find the length of the given string.

	#include<stdio.h>
	
	int main(){
		
		char str[]="Hello World";
		int len=strlen(str);
		
		printf("The length of String is %d\n",len);
				
		return 0;

//Q-17: Write a C program to copy one string into another string.

	#include<stdio.h>
	#include<string.h>
	
	int main() {
	    char str1[100]="Hello";
		 char str2[100], i;
	
	    for(i=0;str1[i]!='\0';i++){
	        str2[i]=str1[i];
	    }
	
	    str2[i]='\0';
	    printf("Original String: %s\n",str1);
	    printf("Copy String: %s\n",str2);
		
	    return 0;
	}
	
//Q-18: Write a C program to concate (merge) the two strings.

	#include<stdio.h>
	#include<string.h>
	
	int main(){
		
		char str1[]="Hello";
		char str2[]=" World";
		
		strcat(str1,str2);
		
		printf("The Concat String = %s\n",str1);
		
		return 0;
	}
	
//Q-19: Write a C program to print the Pyramid.

	#include<stdio.h>
	
	int main() {
		
	   int i, j, rows=10;
	   
	   for (i = 1; i <= rows; ++i) {
	      for (j = 1; j <= i; ++j) {
	         printf("* ");
	      }
	      printf("\n");
	   }
	   
	   return 0;
	}

//Q-20: Write a C program to find the addition of two values using function.
  	
  	#include<stdio.h>
  	
  	int sum(int a,int b){
  		
  		return a+b;
	}
	  
	int main(){
		
		int n1=2;
		int n2=4;
		
		printf("The Sum is %d",sum(n1,n2));
		
		return 0;
	}

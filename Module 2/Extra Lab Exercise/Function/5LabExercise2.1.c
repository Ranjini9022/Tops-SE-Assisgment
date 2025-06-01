//5. Functions
//LAB EXERCISE 2: Factorial Calculation
//2.1 Write a C program that calculates the factorial of a given number using a function.
#include<stdio.h>
int fact(int);
main(){
	int n,c;
	printf("\n Enter number");
	scanf("%d",&n);
	c=fact(n);
	printf("\n Factorial %d",c);
}
int fact(int n){
	int i,x,f=1;
	for(i=1;i<=x;i++){
		f=f*i;
	}
	}

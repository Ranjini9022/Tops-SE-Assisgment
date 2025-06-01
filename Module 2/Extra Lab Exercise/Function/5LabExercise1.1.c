//LAB EXERCISE 1: Fibonacci Sequence
//1.1 Write a C program that generates the Fibonacci sequence up to N terms using a recursive function
#include<stdio.h>
void fib(int n);
main(){
	int n;
		printf("enter n \n");
	    scanf("%d",&n);
     	fib(n);
}
void fib(int n){
	int a=0,b=1,i,c;
	printf("%d\n",a);
	for(i=1;i<=n;i++){
    c=a+b;
   	printf("%d\n",c);
    b=a;
    a=c;
}
}


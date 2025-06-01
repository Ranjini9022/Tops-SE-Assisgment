//LAB EXERCISE 2: Multiplication Table
//2.1 Write a C program that takes an integer input from the user and prints its multiplication table using a for loop.
#include<stdio.h>
main(){
	int i,num;
	printf("\n Enter the number");
	scanf("%d",&num);
	for(i=1;i<=20;i++){
		//24*1=24
		printf("\n %d * %d = %d",i,num,i*num);
	}	
}


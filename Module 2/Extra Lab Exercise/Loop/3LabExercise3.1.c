//LAB EXERCISE 3: Sum of Digits
//3.1 Write a C program that takes an integer from the user and calculates the sum of its digits using a while loop.
#include<stdio.h>
main(){
	int i,n,sum=0;
	printf("\n Enter the number");
	scanf("%d",&n);
	while(n>0){
		i=n%10;
		sum=sum+i;
		n=n/10;
	}
	printf("\n %d",sum);
}


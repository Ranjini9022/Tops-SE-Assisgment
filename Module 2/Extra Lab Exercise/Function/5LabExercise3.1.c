//LAB EXERCISE 3: Palindrome Check
//1.1 Write a C program that takes a number as input and checks whether it is a palindrome using a function
#include<stdio.h>
main(){
	int n,r,num,sum=0;
	printf("\n Enter a number");
	scanf("%d",&num);
	n=num;
	while(n != 0){
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(sum == num){
		printf("\n%d Palindrome",num);
	}
	else{
		printf("\n%d Not Palindrome",num);
	}
}

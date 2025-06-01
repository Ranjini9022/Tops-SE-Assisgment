//LAB EXERCISE 3: Sum of Digits
//3.2 Extend the program to reverse the digits of the number.
#include<stdio.h>
main(){
	int n,i,rev=0;
	printf("\n Enter the number");
	scanf("%d",&n);
	while(n!=0){
	i=n%10;
	rev=rev*10+i;
	n=n/10;
	}
	printf("\n reversed number %d",rev);
}

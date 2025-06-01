//Lab Challenge 1: Armstrong Number
//1.1 Write a C program that checks whether a given number is an Armstrong number or not (e.g.,153 = 1^3 + 5^3 + 3^3).
#include<stdio.h>
main(){
	int n,r,c,arm=0;
	printf("\n Enter any Number");
	scanf("%d",&n);
	c=n;
	while(n>0){
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	if(c==arm)
	printf("\n Armstrong Number");
	else
	printf("\n Not");
}


//Lab Challenge 1: Armstrong Number
//1.2 Write a program to find all Armstrong numbers between 1 and 1000.
#include<stdio.h>
main(){
	int i,n,r,num,arm=0;
	printf("\n Enter a number");
	scanf("%d",&num);
	printf("\n Armstrong Numbers");
	for(i=1;i<=num;i++){
		arm=0;
		n=i;
		while(n != 0){
			r=n%10;
			arm=arm+(r*r*r);
			n=n/10;
		}
		if(i==arm){
			printf("\n%d",i);
		}
	}
}

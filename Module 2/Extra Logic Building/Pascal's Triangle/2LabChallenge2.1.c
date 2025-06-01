//Lab Challenge 2: Pascal’s Triangle
//2.1 Write a C program that generates Pascal’s Triangle up to N rows using loops.
#include<stdio.h>
main(){
	int i,j,k,n,value;
	printf("\n Enter the number of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(k=n-i;k>=0;k--)
		printf(" ");
		value=1;
		for(j=0;j<=i;j++){
			printf("%2d",value);
			value=value*(i-j)/(j+1);
		}
		printf("\n");
	}
}


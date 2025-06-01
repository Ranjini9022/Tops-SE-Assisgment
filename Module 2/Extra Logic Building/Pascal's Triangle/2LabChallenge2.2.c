//Lab Challenge 2: Pascal’s Triangle
//2.2 Implement the same program using a recursive function.
#include<stdio.h>
int fact(int);
main(){
	int i,j,k,n;
	printf("\n Enter number of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(k=0;k<n-1;k++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("%d ",fact(i)/(fact(i-j)*fact(j))); //c(n,r)=n!/(n-r)!*r!
		}
		printf("\n");
	}
}
int fact(int x){
	int p=1,y;
	for(y=1;y<=x;y++){
		p=p*y;
	}
}

//LAB EXERCISE 2: Multiplication Table
//2.2 Allow the user to input the range of the multiplication table (e.g., from 1 to N).
#include<stdio.h>
main(){
	int i,j,n;
	printf("\n Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	for(j=1;j<=20;j++){
		printf("\n %d * %d = %d",i,j,i*j);
	}
	printf("\n");
}
}


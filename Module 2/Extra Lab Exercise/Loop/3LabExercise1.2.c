//3. Loops
//LAB EXERCISE 1: Prime Number Check: 1.2 The program to print all prime numbers between 1 and a given number.
#include<stdio.h>
main(){
	int i,j,n;
	printf("\n Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=2;j<i;j++){
			if(i % j == 0){
				break;
			}
			}
			if(i==j){
				printf("%d",i);
		}
	}
	printf("\n");
}


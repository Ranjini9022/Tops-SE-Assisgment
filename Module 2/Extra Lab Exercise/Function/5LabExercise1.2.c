//5. Functions
//LAB EXERCISE 1: Fibonacci Sequence
//1.2 Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative and recursive methods. Compare their efficiency.
#include<stdio.h>
void fibonacci (int num,int a,int b){
	if( num == 0)
	{
		
	}else{
		printf("%d",a);
		fibonacci (num-1,b,a+b);
	}
}
main(){
	int num_terms = 10;
	printf("\n Fiabonacci series");
	fibonacci (num_terms,0,1);
	
	int i,n,a=0,b=1,c;
	printf("\n Enter a number to find the series");
	scanf("%d",&n);
	printf("\n The Fibonacci series");
	for (i=0;i<n;i++){
		if(i<=1){
			c=i;
		}
		else{
			c=a+b;
			a=b;
			b=c;
		}
		printf("\n %d",c);
	}
}


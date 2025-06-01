//5. Functions
//LAB EXERCISE 2: Factorial Calculation
//2.2 Implement both an iterative and a recursive version of the factorial function and compare their performance for large numbers.
#include<stdio.h>
int fact(int);
void main(){
	int f,r;
	printf("\n Enter any number");
	scanf("%d",&f);
	r=fact(f);
	printf("\n Factorial of %d %d",f,r);
}
int fact(int f)
{
	if(f==0)
	return 1;
	else{
		return(f*fact(f-1));
	}
}
	int i,n,s=1;
		printf("\n Enter number");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		s=s*i;
	}
	printf("%d",s);
} 

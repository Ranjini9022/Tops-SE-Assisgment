//2. Control Statements
//LAB EXERCISE 2: 2.1  Write a C program that takes three numbers from the user and determines: The largest number(if-else).
#include<stdio.h>
main(){
	int a,b,c;
	printf("\n Enter the number");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("\n %d is largest",a);
	}
    if(b>a && b>c){
		printf("\n %d is largest",b);
	}
	else{
		printf("\n %d is largest",c);
	}
	
	//using switch statement
	
}



//3. Loops
//LAB EXERCISE 1: Prime Number Check: 1.1 Write a C program that checks whether a given number is a prime number or not using a for loop
#include<stdio.h>
main(){
	int i,num,flag=0;
	printf("\n enter the number");
	scanf("%d",&num);
	for(i=2;i<num/2;i++){
       if(num%i==0){
       	flag=1;
	   }
}
	(flag=0)?printf("%d is prime",num):printf("%d is not prime",num);
}

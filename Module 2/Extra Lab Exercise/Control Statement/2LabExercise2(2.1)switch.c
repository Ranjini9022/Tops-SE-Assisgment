//2. Control Statements
//LAB EXERCISE 2: 2.1  Write a C program that takes three numbers from the user and determines: The largest number(switch-statement).
#include<stdio.h>
main(){
	float num1,num2,num3;
	float largest,smallest;
	printf("\n Enter the number");
	scanf("%f %f %f",&num1,&num2,&num3);
	
	int largestCase=(num1>num2)?(num1>num3 ? 1:3) : (num2>num3 ? 2:3);
	switch(largestCase){
		case 1:
			largest=num1;
			break;
			case 2:
				largest=num2;
				break;
				case 3:
					largest=num3;
					break;
	}
	
	int smallestCase=(num1<num2)?(num1<num3 ? 1:3) : (num2<num3 ? 2:3);
	switch(smallestCase){
		case 1:
			smallest=num1;
			break;
			case 2:
				smallest=num2;
				break;
				case 3:
					smallest=num3;
					break;
	}
	printf("\n Largest Number: %.2f",largest);
	printf("\n Smallest Number: %.2f",smallest);
}

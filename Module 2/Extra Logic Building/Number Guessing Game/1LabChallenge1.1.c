//Lab Challenge 3: Number Guessing Game
//3.1 Write a C program that implements a simple number guessing game. The program should generate a random number between 1 and 100, and the user should guess the number within a limited number of attempts.
// Challenge: Provide hints to the user if the guessed number is too high or too low.
#include<stdio.h>
main(){
	int randomNo,input;
	randomNo=rand()%100+1;
	printf("%d",randomNo);
	do{
		printf("\n Enter a number from 1 to 100");
		scanf("%d",&input);
		if(randomNo>input){
		printf("\n Number guessed is low");
	}else if(randomNo<input){
		printf("\n Number guessed is high");
	}
}
	while(randomNo!=input);
	printf("\n Bulls Eye");
}


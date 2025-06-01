////LAB EXERCISE 2: 2.3 Whether the number is a multiple of both 3 and 5.
#include<stdio.h>
main(){
	int num;
	printf("\n enter the value of num");
	scanf("%d",&num);
	if(num % 3 == 0 && num % 5 == 0){
		printf("\n The number is multiple of both 3 and 5");
	}
	else {
		printf("\n The number is not multiple of both 3 and 5");
	}
}


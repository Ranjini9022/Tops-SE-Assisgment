//LAB EXERCISE 3: Palindrome Check
//3.2 Modify the program to check if a given string is a palindrome.
#include<stdio.h>
main(){
	char str[20];
	int i,length,flag=0;
	printf("\n Enter the Name");
	scanf("%s",str);
	
	length=0;
	while(str[length]!='\0'){
		length++;
	}
	for(i=0;i<length;i++){
		if(str[i]!= str[length-i-1]){
			flag=1;
			break;
		}
	}
	if(flag){
		printf("\n%s is not a palindrome",str);
	}
	else{
		printf("\n%s is a palindrome",str);
	}
}

//4. Arrays
//LAB EXERCISE 1: Maximum and Minimum in Array
//4.1 Write a C program that accepts 10 integers from the user and stores them in an array.The program should then find and print the maximum and minimum values in the array.
#include<stdio.h>
main(){
	int a[11];
	int i,min,max;
	for(i=0;i<11;i++){
		printf("\n enter a=[%d]",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<11;i++){
		if(a[i]<min){
	    min=a[i];
	}
}
printf("\n Minimum value of array %d",min);

max=a[0];
for(i=0;i<11;i++){
	if(a[i]>max){
		max=a[i];
	}
}
printf("\n Maximum value of array %d",max);

}

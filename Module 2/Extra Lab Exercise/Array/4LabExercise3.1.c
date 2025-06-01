//4. Arrays
//LAB EXERCISE 3: Sum of Array Elements
//Write a C program that takes N numbers from the user and stores them in an array.The program should then calculate and display the sum of all array elements.
//Modify the program to also find the average of the numbers.
#include<stdio.h>
main(){
	  int i,n,sum=0;
	  int a[n];
	  float avg;
	  printf("\n Enter n of array");
	  scanf("%d",&n);
	  printf("\n Enter Elements of Array");
	  for(i=0;i<n;i++){
	  	printf("\n enter a[%d]",i);
	  	scanf("%d",&a[i]);
	  	sum=sum+a[i];
	  }	
	  for(i=0;i<n;i++){
	  	printf("\n a[%d]=%d",i,a[i]);
	  		avg=(float)sum/n;
	}
	printf("\n sum of all array element=%d",sum);
	printf("\n Average of all array element=%f",avg);
}


//4. Arrays
//LAB EXERCISE 1: Maximum and Minimum in Array
//2.2 Extend the program to sort the array in ascending order.
#include<stdio.h>
main(){
	int a[6];
	int i,j,temp;
	printf("\n Enter Array Elements");
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++){
		for(j=i+1;j<6;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n Array Elements");
	for(i=0;i<6;i++){
		printf("%d",a[i]);
	}
}

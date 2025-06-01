//4. Arrays
//LAB EXERCISE 2: Matrix Addition
//2.2 Extend the program to work with 3x3 matrices and matrix multiplication.
#include<stdio.h>
main(){
	int a[3][3],b[3][3],c[3][3],d[3][3];
	int i,j,k,temp;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n Enter a[%d][%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n==========\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n Enter b[%d][%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n Multiplying two matrix");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			temp=0;
			for(k=0;k<3;k++){
				temp=temp+a[i][k]*a[k][j];
			}
			c[i][j]=temp;
		}
	}
	printf("\n Multiplication result of the two Matrix");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
}

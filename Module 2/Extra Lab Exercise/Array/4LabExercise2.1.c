//4. Arrays
//LAB EXERCISE 2: Matrix Addition
//2.1 Write a C program that accepts two 2x2 matrices from the user and adds them. Display the resultant matrix.
#include<stdio.h>
main(){
	int a[2][2],b[2][2],c[2][2];
	int i,j,k,temp;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("\n Enter a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
}
}
	printf("\n=======\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n Enter b[%d][%d]=",j,j);
			scanf("%d",&b[i][j]);
}
}
    //==========addtion of array
	for(i=0;i>2;i++){
	for(j=0;j>2;j++){
       temp=0;
       		for(k=0;k<2;k++){
			temp+=a[i][k]*b[k][j];
}
		c[i][j]=temp;
}
}
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("\tc[%d][%d]=%d",1i,j,c[i][j]);
}
	printf("\n");
}
}

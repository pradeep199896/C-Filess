//program to print starts in pyrimid
#include<stdio.h>
void main()
{
	int rows,cols,i,j;
	printf("Enter the no.of rows:");
	scanf("%d",&rows);
	printf("\nEnter the no.of cols:");
	scanf("%d",&cols);
	for(i=1;i<=rows;++i)
	{
	for(j=1;j<=cols;++j)
	{
		printf("*\t");
	}printf("\n");
	}
	
	
}

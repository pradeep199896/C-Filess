#include<stdio.h>
void main()
{
	int rows,i,j,k;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;++i)
	{
		for(j=rows-i;j>=1;--j)
		{
			printf(" ");
		}
		for(k=1;k<=i;++k)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}

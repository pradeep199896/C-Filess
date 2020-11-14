//star in pyrimid form
#include<stdio.h>
void main()
{
	int rows,cols,i,j;
	printf("Enter the rows and cols:");
	scanf("%d %d",&rows,&cols);
	for(i=1;i<=rows;++i)
	{
		for(j=cols;j>=i;--j)
		{
			printf("*");
		}
		printf("\n");
	}
}

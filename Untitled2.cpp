//star in pyrimid form
#include<stdio.h>
void main()
{
	int rows,cols,i,j;
	printf("Enter the rows and cols:");
	scanf("%d %d",&rows,&cols);
	for(i=rows;i<=rows;--i)
	{
		for(j=1;j<=i;++j)
		{
			printf("*");
		}
		printf("\n");
	}
}

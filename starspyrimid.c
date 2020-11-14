#include<stdio.h>
void main()
{
	int i,j,rows,cols;
	printf("Enter rows and columns:");
	scanf("%d %d",&rows,&cols);
	for(i=1;i<=rows;++i)
	{
		for(j=1;j<=i;++j)
		{
			printf("*");
			printf("*");
		}
		printf("\n");
	}
}

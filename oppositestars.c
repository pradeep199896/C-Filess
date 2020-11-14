#include<stdio.h>
void main()
{
	int i,j,rows,cols,k;
	printf("Enter the roms and cols:");
	scanf("%d %d",&rows,&cols);
	for(i=1;i<=rows;++i)
	{
		for(k=cols;k>=i;--k)
		{
			printf(" ");
		}
		for(j=1;j<=i;++j)
		{
			printf("*");
			
		}

		printf("\n");
	}
}

#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],sum[3][3];
	int i,j;
	printf("Enter the matrix one:\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("Enter the matrix two:\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			scanf("%d",&b[i][j]);
		}
		
	}
	printf("The resultant matrix is given:\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\n",sum[i][j]);
		}
		
	}
}

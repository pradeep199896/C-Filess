#include<stdio.h>
void main()
{
	int i,j,a[4];
		printf("Enter the numbers:");
	for(i=1;i<=4;++i)
	{
		scanf("%d",&a[i]);
	}
	printf("\n\n");
	for(j=1;j<=4;++j)
	{
		printf("%d\n",a[j]*2);
	}
}

#include<stdio.h>
int main()
{
	int city=2,week=7;
	int temp[city][week];
	int i,j,k;
	for(i=0;i<city;++i)
	{
		for(j=0;j<week;++j)
		{
			printf("City %d of day %d\n",i+1,j+1);
			scanf("%d",&temp[i][j]);
		}
	}
	for(i=0;i<city;++i)
	{
		for(j=0;j<week;++j)
		{
			printf("%d\n",temp[i][]);
		}
		
	}
	
	return 0;
}

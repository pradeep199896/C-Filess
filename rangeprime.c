#include<stdio.h>
void main()
{
	int min,max,count,k,i,flag;
	printf("Enter the min:");
	scanf("%d",&min);
	printf("Enter the max:");
	scanf("%d",&max);
	for(i=min;i<=max;++i)
	{
		flag=0;
		for(k=2;k<i;++k)
		{
			if (i%k==0)
			{
				flag=1;
				break;
			}
}
if (flag==0)
{
	printf("%d\n",i);
}
	}
	
}

#include<stdio.h>
void main()
{
	int num,i,count=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;++i)
	{
		if (num%i==0)
		{
			count++;
		}
	}
	if (count==2)
	{
		printf("number is prime");
	}
	else
	{
		printf("number is noot prime");
	}
}

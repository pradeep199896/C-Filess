#include<stdio.h>
main()
{
	int num,res;
	printf("Enter the series of numbers required:");
	scanf("%d",&num);
	res=sum(num);
	printf("Sum of %d natural numbers is:%d",num,res);
}
int sum(int a)
{
	if(a==0)
	{
		return 0;
	}
	else
	{
		return a+sum(a-1);
	}
}

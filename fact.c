//Fcatorial
#include<stdio.h>
void main()
{
	int num,fact=1,i;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num==0)
	{
		fact=1;
	}
	else
	{
		for(i=1;i<=num;++i)
		{
			fact=fact*i;
		}
	}
	printf("%d",fact);
}


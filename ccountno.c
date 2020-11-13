#include<stdio.h>
void main()
{
   long	long int num;
	int i,count;
	count=0;
	printf("Enter the number to be counted:");
	scanf("%lli",&num);
	for(i=1;i<=num;++i)
	{
		num=num/10;
		count++;
	}
	printf("%d",count);
}


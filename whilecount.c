#include<stdio.h>
void main()
{
	long long int num;
	int count;
	count=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
		count++;
		
	}
	printf("%d",count);
}

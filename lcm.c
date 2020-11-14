#include<stdio.h>
void main()
{ 
int num1,num2,i,mul;
	printf("Enter the two numbers for LCM:\n");
	scanf("%d %d",&num1,&num2);
	mul=num1*num2;
	for(i=1;i<=mul;++i)
	{
		if (i%num1==0 && i%num2==0)
		{
			printf("%d",i);
			break;
		}
	}
}-

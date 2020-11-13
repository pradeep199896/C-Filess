//program for gcd or hcf
#include<stdio.h>
int main()
{
	int num1,num2,smaller,i,hcf;
	printf("Enter the number 1:");
	scanf("%d",&num1);
	printf("Enter the number 2:");
	scanf("%d",&num2);
	if (num1>num2)
	{
		smaller=num2;
		
	}
	else
	{
		smaller=num1;
	}
	for(i=1;i<=smaller;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			hcf=i;
		}
			print("%d",hcf);
	}
}


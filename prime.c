#include<stdio.h>
int main()
{ int num,i;
	printf("Enter the number of prime nums req.:");
	scanf("%d",&num);
	for(i=2;i<num;++i)
	{
		if(num%i==0)
		{
			printf("not prime");
			break;
		}
	}
		printf("is prime");
}

#include<stdio.h>
void main()
{
	long long int num;
	int rem,sum=0;
		printf("Enter the number wanted to reverse");
	scanf("%lli",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
			}
			printf("%d",sum);
	
}

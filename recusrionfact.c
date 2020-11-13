//factorial using recursion
#include<stdio.h>
int fact(int num)
{
	int res;
	if(num==0)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}
void main()
{
	int num;
	int res;
	printf("Enter thr number");
	scanf("%d",&num);
	res=fact(num);
	printf("Fcatorial of %d:%d",num,res);
}

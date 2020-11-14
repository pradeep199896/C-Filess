#include<stdio.h>
void main()
{
	int num,sum=0,i;
	int *ptr;
	printf("Enter the req. sum of numbers");
	scanf("%d",&num);
	ptr=(int *)calloc(num,sizeof(int));
	for(i=0;i<num;++i)
	{
		scanf("%d",ptr[i]);
		sum=sum+*(ptr+i);
	}
	printf("%d",sum);
}

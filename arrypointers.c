#include<stdio.h>
void main()
{
	int arr[4]={5,2,4,14};
	int *ptr;int i;
	for(i=0;i<4;++i)
	{
		ptr=&arr[i];
		printf("%d\n",*ptr);
	}
	for(i=0;i<4;++i)
	{
		printf("%d \n",&arr[i]);
	}
}

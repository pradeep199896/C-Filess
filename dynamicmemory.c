/*Dynamic memory allocations*/
//malloc
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,*ptr,sum=0;
	int i;
	printf("Enter the sum of numbers u want:");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;++i)
	{
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
printf("%d\n",sizeof(ptr));
	printf("%d\n",sum);
	free(ptr);
printf("%d\n",sizeof(ptr));
	
}

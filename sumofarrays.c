#include<stdio.h>
void main()  
{
	int n;
	int a[n],sum=0,avg;
	int i,j,k;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements in array");
	for(i=0;i<n;++i)
	{
		scanf("%d\n",&a[i]);
	}
	for(k=0;k<n;++k)
	{
		printf("%d\n",a[k]);
	}
	for(j=0;j<n;++j)
	{
		sum=sum+a[j];
	}
	avg=sum/n;
	printf("\n%d \n %d",sum,avg);
}

#include<stdio.h>
void main()
{
	long int n,a[n],i;
	int small;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Eter the elements in array:\n");
	for(i=0;i<n;++i)
	{
		scanf("%li",&a[i]);
	}
	small=a[0];
	for(i=1;i<n;++i)
	{
		if(small>a[i])
		{
			small=a[i];
		}
	}
	printf("smallest element in array is given %d",small);
}

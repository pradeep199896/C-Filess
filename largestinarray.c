#include<stdio.h>
void main()
{  
    long int n;
	int a[n];
	int i,lar;
	printf("Enter the size of an array:");
	scanf("%li",&n);
	printf("Enter the elements in array:\n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	lar=a[0];
	for(i=1;i<n;++i)
	{
		if(lar<a[i])
		{
			lar=a[i];
		}
	}
	printf("Largest number:%d\n",lar);
	}


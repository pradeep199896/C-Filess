#include<stdio.h>
void main()
{
	int a[5]={7,8,9,5,3,1};
	int *p;
	p=&a[0];
	printf("%d\n",*p);
	printf("%d\n",*(p+3));
	printf("%d\n",*(&a[1]));
		printf("%d\n",*(&a[2+6]));
		printf("%d\n",p);
			printf("%d\n %d\n",p+1,&a[1]);
				printf("%d\n %d\n",p+2,&a[2]);
}

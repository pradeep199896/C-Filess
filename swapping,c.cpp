//swap of two numbers
#include<stdio.h>
void swapping(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("Ater swapping %d and %d",*x,*y);
}
int main()
{
	int a,b,res;
	int *ptr1,*ptr2;
	printf("Enter the two numbers before swapping:");
	scanf("%d %d",&a,&b);
	ptr1=&a;
	ptr2=&b;
	swapping(ptr1,ptr2);
	
}


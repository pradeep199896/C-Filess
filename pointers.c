//pointers
void main()
{
	int i=100;
	int *ptr,*k;
	ptr=&i;
	k=&ptr;	
	printf("%d\n",ptr);
	printf("%d\n",k);
	printf("%d\n",i);
	printf("%d\n",&i);
	printf("%d\n",*ptr);
	printf("%d\n",*k);
	
}

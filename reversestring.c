//reverse a string
#include<stdio.h>
void main()
{
	char name[30],rev[40];
	int lenth,j,i;
	printf("Enter the stuff:\n");
	scanf("%s",name);
	lenth=strlen(name);
	j=lenth-1;
	for(i=0;i<lenth;++i)
	{
		rev[i]=name[j];
		j--
		;
	}
	printf("%s",rev);
  
}

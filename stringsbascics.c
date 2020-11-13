#include<stdio.h>
void main()
{
char c[20]="Pradeep";
int i;
for(i=0;i<20;++i)
{
	printf("%c",c[i]);
	}
	char *d="Hello world";
	printf(d);	
	char f[20]={'p','r','a','d','e','e','p','\0'};
	for(i=0;i<20;++i)
	{
		printf("%c",f[i]);
	}
}

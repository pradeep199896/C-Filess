#include<stdio.h>
void main()
{
	char str[60],count=0;
	char c;
	printf("Enetr the string");
	scanf("%s",&str);
	printf("enter the character");
	scanf("%s",&c);
	int i;
	for(i=0;i<60;++i)
	{
		if(c==str[i])
		{
			count=count+1;
		}
	}
	printf("Frequency of character is=%d",count);
	
}

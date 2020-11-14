#include<stdio.h>
void main()
{
	char name[30];
	printf("Enter the name:");
	scanf("%s",&name);
	printf("Name:%s\n",name);
	printf("%d",strlen(name));
	printf("%s",strcpy(name));
	char str[20];
	puts("Enter the string");
	gets(str);
	puts(str);
}

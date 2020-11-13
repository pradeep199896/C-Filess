#include<stdio.h>
void main()
{
	char name[]="pradeep";
	char hero[]="praful";
	printf("Name:%s\n",name);
	printf("%d\n",strlen(name));//strlen()
	strcpy(name,hero); //strcpy()
	printf("%s\n",name);
	char s1[]="Karri";
	char s2[]="Musali";
	if(strcmp(s1,s2)==0)//strcmp()
	{
		printf("same strings\n");
	}
	else
	{
		printf("Not same\n");
	}
	strcat(s1,s2);
	printf("%s",s1);
}

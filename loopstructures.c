struct Class{
	char name[20];
	int roll;
};
#include<stdio.h>
void main(){
	int i;
	struct Class st[4];
	printf("Enter the name and roll of student:\n");
	for(i=0;i<4;++i)
	{
		printf("Enter the student %d:\n",i+1);
		scanf("%s %d",&st[i].name,&st[i].roll);
	}
	printf("Details of students is given by:\n");
	for(i=0;i<4;++i)
	{
		printf("%s \n %d\n",st[i].name,st[i].roll);
	}
}

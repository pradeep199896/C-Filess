//structure 
#include<stdio.h>
struct Class{
	char name[20];
	int roll;
	float percent;
	char gender;
};
void main()
{
	struct Class s1,s2;
	strcpy(s1.name,"Pradeep");
	s1.roll=465;
	s1.percent=91.0;
	s1.gender='M';
	strcpy(s2.name,"praful");
	s2.roll=467;
	s2.percent=98.0;
	s2.gender='M';
	printf("%s\n",s1.name);
	printf("%d\n",s1.roll);
	printf("%f\n",s1.percent);
	printf("%c\n",s1.gender);
	printf("%s\n",s2.name);
	printf("%d\n",s2.roll);
	printf("%f\n",s2.percent);
	printf("%c\n",s2.gender);
}


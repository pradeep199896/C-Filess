/*function arguments as structures*/
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
	printbook(s1);
	printbook(s2);
}
void printbook(struct Class book)
{
	printf("%s\n",book.name);
	printf("%d\n",book.roll);
	printf("%f\n",book.percent);
	printf("%c\n",book.gender);
}

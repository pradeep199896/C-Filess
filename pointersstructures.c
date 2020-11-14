/*Pointers to structures*/
struct Class{
	char name[20];
	int roll;
	float percent;
	char gender;
};
#include<stdio.h>
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
	printbook(&s1);
	printbook(&s2);
}
void printbook(struct Class *st)
{
	printf("%s\n",(st->name));
	printf("%d\n",(st->roll));
	printf("%f\n",(st->percent));
	printf("%c\n",(st->gender));
}

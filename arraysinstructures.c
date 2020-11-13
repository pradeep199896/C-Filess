//arrays in structures
struct Emply{
	char ename[20];
	int eid;
	double sal;
};
#include<stdio.h>
void main()
{
	struct Emply e[3]={{"Pradeep",465,45},{"Praful",478,364},{"farman",412,56}};
    printf("%s %d %f\n",e[0].ename,e[0].eid,e[0].sal);
    printf("%s %d %f\n",e[1].ename,e[1].eid,e[1].sal);
    printf("%s %d %f\n",e[2].ename,e[2].eid,e[2].sal);
}

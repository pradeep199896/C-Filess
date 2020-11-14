//understanding scope of variables
//BLOCK SCOPE
#include<stdio.h>
int a=10;//program scope
void main(){
	int a=10;
	printf("%d\n",a);
	{ int a;
		printf("%d\n",a);//blockscope
	}
	printf("%d\n",a);
	check();
}
int check(){
	printf("%d",a);//method scope
}

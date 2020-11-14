#include<stdio.h>
struct Books{
	char name[20];
	int price;
	int id; 
	int pages;
};
void main()
{
	struct Books b1={"Helen killer",200,1026987,120
	};
	printf("\n",b1.name);
	printf("%d\n",b1.price);
	printf("%d\n",b1.id);
	printf("%d\n",b1.pages);
}

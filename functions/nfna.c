#include<stdio.h>
void functiom()
{
    int x,y;
    printf("enter x and y values");
        scanf("%d%d",&x,&y);
    if(x>y)
    {
        printf("max no.");
    }
    else
        {
        printf("smaller num");
    }
}
void main()
{
    functiom();
    return 0;

}

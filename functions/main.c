#include <stdio.h>
#include<math.h>
int main()
 { int i,j,m,n,p,q;
  printf("enter the size of 1st matix");
  scanf("%d %d",&m,&n);
  printf("First matrix \n"); 
  int matrix[m][n],matri[p][q];
  for(i=0;i<m;++i)
  {
  	for(j=0;j<n;++j)
  	{
  		printf("a%d%d ",i+1,j+1);
  		scanf("%d",&matrix[i][j]);
	  }
  	
  }
   printf("enter the size of 2nd matix");
  scanf("%d %d",&p,&q);
  printf("second matrix \n");
  for(i=0;i<p;++i)
  {
  	for(j=0;j<q;++j)
  	{
  		printf("b%d%d ",i+1,j+1);
  scanf("%d",&matri[p][q]);
}
}
}

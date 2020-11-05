#include<stdio.h>

multiply(int a[3][3],int b[3][3])
{
	int i,j,k,c[3][3],s;
    for(i=0;i<3;i++)
 	{
 		for(j=0;j<3;j++)
 		 {
 		 	s=0;
 		 	for(k=0;k<3;k++)
 		 	 {
 		 	 	s=s+a[i][k]*b[k][j];
			   }
			  c[i][j]=s;
			  printf(" %d",c[i][j]); 
		  }
		  printf("\n");
	 }	
}

 int main()
 {
 	int a[3][3],b[3][3],i,j;
 	printf("Enter elements for matrix 1\n");
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<3;j++)
 		  scanf("%d",&a[i][j]);
	 }
	printf("\nEnter elements for matrix 2\n");
	for(i=0;i<3;i++)
 	{
 		for(j=0;j<3;j++)
 		  scanf("%d",&b[i][j]);
	 }
	 printf("\nmultiply of two matrix is \n");
	 multiply(a,b);
	 
 }

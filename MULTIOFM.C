#include<stdio.h>																#include()
#include<conio.h>

 main()
 {
  int a[3][3],b[3][3],c[3][3],i,j,k,s=0;
  clrscr();
  printf("Enter elements for first matrix = ");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&a[i][j]);
      }
	}

    printf("Enter elements for two matrix = ");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&b[i][j]);
      }
	}

    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
      {
	for(k=0;k<3;k++)
	 { s=s+a[i][k]*b[k][j]; }
	 c[i][j]=s;
	 printf(" %d",c[i][j]);
	 }
       printf("\n");
       }
     getch();
     }

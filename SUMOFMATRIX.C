#include<stdio.h>
#include<conio.h>

//sum of two array//

 main()
 {
  int a[3][3],b[3][3],c[3][3],i,j;
  clrscr();
  printf("Enter elements for first matrix");
  for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
     scanf("%d",&a[i][j]);
     }
       }

    printf("Enter elements for second matrix");
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
       c[i][j]=a[i][j]+b[i][j];
       printf("%d ",c[i][j]);
       }
       printf("\n");
       }
     getch();
     }


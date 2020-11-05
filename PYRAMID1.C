#include<stdio.h>
#include<conio.h>

 main()

{
   int i,j,k,row;
   clrscr();
   printf("Enter no. of row:-");
   scanf("%d",&row);
   for(i=0;i<row;i++)
  {
    for(j=i;j<row;j++)
    {
     printf(" ");
     }
    for(k=0;k<=i;k++)
    {
     printf(" *");
     }
     printf("\n");
       }
   getch();
   }



#include<stdio.h>
#include<conio.h>

 main()
{
  int i,j,k,row;
  clrscr();
  printf("Enter no. of row");
  scanf("%d",&row);
  for(i=row;i>0;i--)
  {
    for(j=i;j<=row;j++)
    {
      printf(" ");
      }
    for(k=i;k>0;k--)
    {
      printf(" *");
      }
      printf("\n");
	}
     getch();
     }



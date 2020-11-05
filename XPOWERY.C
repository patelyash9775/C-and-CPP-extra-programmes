#include<stdio.h>
#include<conio.h>

 main()
{
 int x,y,p=1,i;
 clrscr();
 printf("Enter a number and it's power\n");
 scanf("%d%d",&x,&y);
  for(i=1;i<=y;i++)
  {
   p=p*x;
   }
  printf("\n x power y is %d",p);
  getch();
  }



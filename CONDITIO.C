#include<stdio.h>
#include<conio.h>

int fun();
main()
{
   int x;
   clrscr();
   x=fun();
   printf("%d",x);
   getch();
   }
 int fun()
 {
  return(5>4?5:4);
  }
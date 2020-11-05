#include<stdio.h>
#include<conio.h>

 main()
 {
  register int x=4;  //here register use for run time consumption.
  int y;
  clrscr();
  y=x++;
  printf("\n%d",y);
  y=x--;
  printf("\n%d",y);
  y=x+5;
  printf("\n%d",y);
  getch();
  }
#include<stdio.h>
#include<conio.h>

main()
{
  int x=5;
  int *p,**q,***r;
  clrscr();
  p=&x;
  q=&p;
  r=&q;
  ***r=12;
  printf("%d",x);
  getch();
  }
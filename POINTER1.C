#include<stdio.h>
#include<conio.h>

 main()
 {
  int x=5;
  int *p;
  p=&x;
  clrscr();
  printf("%d %u \n",x,p);
  printf("%d %u",*p,&x);
  printf("\n%u",*&p);
  getch();
  }
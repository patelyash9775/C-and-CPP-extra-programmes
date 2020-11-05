#include<stdio.h>
#include<conio.h>

void f1();
main()
{
 extern int x;
 clrscr();
 printf("x=%d",x);
 f1();
 printf("\nx=%d",x);
 getch();
 }
 int x;
 void f1()
 {
  x++;
  printf("\nx=%d",x);
  }

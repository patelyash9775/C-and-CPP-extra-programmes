#include<stdio.h>
#include<conio.h>

 int x=5;
 void f1();
 main()
 {
   clrscr();
   printf("x=%d",x);
   f1();
   printf("\nx=%d",x);
   getch();
   }
  void f1()
  {
   x++;
   printf("\nx=%d",x);
   }

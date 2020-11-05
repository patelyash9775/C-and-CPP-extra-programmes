#include<stdio.h>
#include<conio.h>

 void swap(int*,int*);
 main()
 {
  int a,b;
  int *p,*q;
  clrscr();
  p=&a;
  q=&b;
  printf("Enter two number:");
  scanf("%d %d",p,q);
  swap(&a,&b);
  printf("\na=%d  b=%d",a,b);
  getch();
  }

  void swap(int *x,int *y)
  {
   int t;
   t=*x;
   *x=*y;
   *y=t;
   }
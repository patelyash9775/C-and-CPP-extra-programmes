#include<stdio.h>
#include<conio.h>

 main()
 {
  int x,y,z,a;
  clrscr();
  x=sizeof(int);
  y=sizeof(float);
  z=sizeof(char);
  a=sizeof(double);
  printf("\n%d \n%d \n%d \n%d",x,y,z,a);
  getch();
  }
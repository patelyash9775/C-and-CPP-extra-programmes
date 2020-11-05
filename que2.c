#include<stdio.h>

 extern int a;
 void fun();
 int main()
 {

  printf("\n a=%d",a);
  return 0;}
  int a;
  void fun()
  {
   printf("\n in fun a=%d",a);
   }

#include<iostream.h>
#include<conio.h>

class A
{
 public:
  void f1()
 {
   }
 virtual void f2()
  {
   }

     };

class B:public A
{
  public:
  void f1()
  {
  }
  void f2()
  {
   }
     };
 void main()
 {
  clrscr();
  A *p,o1;
  B o2;
  p=&o2;
  p->f1();//A
  o2.f1();//B
  p->f2();//B
  getch();
  }
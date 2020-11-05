#include<iostream.h>
#include<conio.h>

class A
{
 public:
 void f1()
 {
 cout<<"\n1.Af1()";
   }
 virtual void f2()
 {
  cout<<"\n2.Af2()";

    }
 virtual void f3()
 {
  cout<<"\n3.Af3()";
    }
  void f4()
  {
  cout<<"\n4.Af4()";
   }
      };

class B:public A
{
  public:
  void f1()
  {
  cout<<"\n1.Bf1()";
     }
  void f2()
  {
   cout<<"\n2.Bf2()";
   }
  void f4(int x)
  { cout<<"\n4.Bf4()";
     }
       };
 main()
 {
  clrscr();
  A *p,o1,*q;
  B o2;
  q=&o2;
  p=&o1;
  p->f1();//EB
  p->f2();//LB
  p->f3();//LB
  p->f4();//LB
  q->f1();//EB A
  q->f2();//LB B
  q->f3();//LB A
  q->f4();//LB A

  getch();
  }
#include<iostream.h>
#include<conio.h>

class person
{
 public:
 virtual void fun()=0;//pure virtual

 void f1()
 {
  cout<<"\nperson.f1()";
  }
    };
 class student : public person
 {
   public:
   void fun()
   {
     cout<<"\nstudent fun";
     }
       };
   main()
 {
  clrscr();
  student s;  //person is an abstract class
  s.fun();
  getch();
  }
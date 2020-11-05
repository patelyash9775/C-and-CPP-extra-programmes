#include<iostream.h>
#include<conio.h>

class B;
class A
{
 private:
 int a;
 public:
 void setdata(int x)
 {
  a=x;
  }
 friend void fun(A,B);
 };
 class B
 {
   private:
   int b;
   public:
   void setinfo(int y)
   {
     b=y;
     }
   friend void fun(A,B);
   };
  void fun(A o1,B o2)
  {
   cout<<"sum is "<<o1.a+o2.b;
   }
   main()
   {
    clrscr();
    A obj1;
    B obj2;
    obj1.setdata(2);
    obj2.setinfo(4);
    fun(obj1,obj2);
    getch();
    }

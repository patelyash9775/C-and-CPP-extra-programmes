#include<iostream.h>
#include<conio.h>
class A
{
  int a;
  public:
  A(int k)
  {
   a=k;
   }
  void showdata()
  {
   cout<<"\na= "<<a;
   }
     };

 class B:public A
 {
   int b;
   public:
   B(int x,int y):A(x)
   {
     b=y;
     }
   void showinfo()
   {
     cout<<"\nb= "<<b;
     }
       };

   main()
   {
    clrscr();
    B obj(2,3);
    obj.showdata();
    obj.showinfo();
    getch();
    }
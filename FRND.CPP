#include<iostream.h>
#include<conio.h>

class complex
{
 int a,b;
 public:
 void setdata(int x,int y)
 {
  a=x;b=y;
  }
  void showdata()
  {
   cout<<"a= "<<a<<"b= "<<b;
   }
   friend void fun(complex);
   };

   void fun(complex c)
   {
    cout<<"sum is "<<c.a+c.b;
    }
    main()
    {
     clrscr();
     complex c1,c2,c3;
     c1.setdata(3,4);
     fun(c1);
     getch();
     }
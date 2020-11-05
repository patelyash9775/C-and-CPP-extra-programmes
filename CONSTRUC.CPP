#include<iostream.h>
#include<conio.h>

class complex
{
 private:
 int a,b;
 public:
 complex(int x,int y)
 {
  a=x;
  b=y;
  }
 complex()
 {
   }
 complex(complex &c)
 {
   a=c.a;
   b=c.b;
   }
 void showdata()
 {
   cout<<"\na= "<<a<<"\nb= "<<b;
   }
      };

  main()
  {
    clrscr();
    complex c1(3,4),c2;
    complex c4(c1);
    c4.showdata();
    getch();
    }

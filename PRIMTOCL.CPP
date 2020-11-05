#include<iostream.h>
#include<conio.h>

class complex
{
 int a,b;
 public:
 complex()
 {
  }
 complex(int k)
 {
  a=k;
  b=0;
  }
 void showdata()
 {
  cout<<"\na= "<<a<<"\nb= "<<b;
  }
     };

  void main()
  {
   clrscr();
   complex c1;
   int x=5;
   c1=x;  //c1.complex(x)
   c1.showdata();
   getch();
   }



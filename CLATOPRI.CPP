#include<iostream.h>
#include<conio.h>

class complex
{

 int a,b;
 public:
 void setdata(int x,int y)
 {
   a=x;
   b=y;
   }
 void showdata()
 {
  cout<<"\na= "<<a<<"\nb= "<<b;
  }
  operator int()
  {
   return(a);
   }
     };

  main()
  {
   clrscr();
   complex c;
   c.setdata(3,4);
   int x;
   x=c; //c1.operator int()
   cout<<"x= "<<x;
   getch();
   }


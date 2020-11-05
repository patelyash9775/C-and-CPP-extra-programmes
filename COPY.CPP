#include<iostream.h>
#include<conio.h>

class dumy
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
   cout<<"\na="<<a<<"\nb="<<b;
   }
     };

 void main()
 {
  clrscr();
  dumy d1;
  d1.setdata(4,5);
  dumy d2=d1;
  d2.showdata();
  getch();
  }
#include<iostream.h>
#include<conio.h>


class integer
{
  int x;
  public:
  void setdata(int a)
  {
    x=a;
    }
  void showdata()
  {
    cout<<"x= "<<x;
    }
  integer operator++()
  {
   integer i;
   i.x=++x;
   return(i);
   }
      };
  void main()
  {
   clrscr();
   integer i1,i2;
   i1.setdata(3);
   i2=++i1;
   i1.showdata();
   i2.showdata();
   getch();
   }

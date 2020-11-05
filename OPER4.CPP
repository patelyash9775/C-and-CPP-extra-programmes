#include<iostream.h>
#include<conio.h>

class integer
{
  int a;
  public:
  void setdata(int x)
  {
     a=x;
     }
  void showdata()
  {
    cout<<"a= "<<a;
    }
  integer operator++(int)
  {
   integer i;
   i.a=a++;
   return(i);
   }
     };

  main()
  {
    clrscr();
    integer i1,i2;
    i1.setdata(4);
    i2=i1++;
    i1.showdata();
    i2.showdata();
    getch();
    }


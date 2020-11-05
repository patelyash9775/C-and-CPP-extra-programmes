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
   complex operator+(complex c)
   {
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return(temp);
    }
      };
   main()
   {
    clrscr();
    complex c1,c2,c3;
    c1.setdata(4,5);
    c2.setdata(6,7);
    c3=c1+c2;
    c3.showdata();
    getch();
    }

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
   complex operator-()
   {
    complex temp;
    temp.a=-a;
    temp.b=-b;
    return(temp);
    }
	};
 main()
 {
  clrscr();
  complex c1,c2;
  c1.setdata(2,3);
  c2=-c1;//c2=c1.operator-();
  c2.showdata();
  getch();
  }
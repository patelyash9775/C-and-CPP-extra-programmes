#include<iostream.h>
#include<conio.h>

class product
{
 int m,n;
 public:
 void setdata(int x,int y)
 {
   m=x;
   n=y;
   }
  int getM()
  {
    return(m);
    }
  int getN()
  {
   return(n);
   }

     };
  class item
  {
   int a,b;
   public:
   void showdata()
   {
    cout<<"\na= "<<a<<"\nb= "<<b;
    }
   item()
   {
    }
   item(product p)
   {
    a=p.getM();
    b=p.getN();
    }
      };
    main()
    {
     clrscr();
     item i;
     product p;
     p.setdata(3,4);
     i=p;
     i.showdata();
     getch();
     }
#include<iostream.h>
#include<conio.h>

 class box
 {
  int l,b,h;
  public:
  void setdimension(int x,int y,int z)
  {
   l=x;b=y;h=z;
   }
   void showdimension()
   {
    cout<<"\nl= "<<l<<"\nb= "<<b<<"\nh= "<<h;
    }

      };

   main()

 {
    clrscr();
    box *p,smallbox;
    p=&smallbox;
    p->setdimension(2,3,4);
    p->showdimension();
    getch();
    }

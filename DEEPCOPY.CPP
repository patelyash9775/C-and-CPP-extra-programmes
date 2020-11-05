#include<iostream.h>
#include<conio.h>

 class dumy
 {
  int a,b,*p;
  public:
  dumy()
  {
   p=new int;
   }
  void setdata(int x,int y,int z)
  {
   a=x;
   b=y;
   *p=z;
   }
   void showdata()
   {
    cout<<"\na= "<<a<<"\nb= "<<b<<"\nc= "<<*p;
    }
    dumy(dumy &d)
    {
     a=d.a;
     b=d.b;
     p=new int;
     *p=*(d.p);
     }

    ~dumy()
    {
     delete p;
     }
       }

    main()
    {
      clrscr();
      dumy d1;
      d1.setdata(1,2,3);
      dumy d2=d1;
      d2.showdata();
      getch();
      }


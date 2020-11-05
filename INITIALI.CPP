#include<iostream.h>
#include<conio.h>

 class dumy
 {
  int a,b;
  public:
  dumy():a(5),b(6)
  {
    }
  void showdata()
  {
   cout<<"\na= "<<a<<"\nb= "<<b;
   }
      }
   main()
   {
    clrscr();
    dumy d;
    d.showdata();
    getch();
    }
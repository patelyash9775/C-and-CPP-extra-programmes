#include<iostream.h>
#include<conio.h>

class car
{
 private:
 int gear;
 public:
 void setdata(int x)
 {
    gear=x;
    }
 void incrementgear()
 {
  if(gear<5)
   gear++;
   }
  void showdata()
  {
   cout<<"\n gear= "<<gear;
   }
     };

class sportscar:public car

{

	  };

  main()
  {
     clrscr();
     sportscar s;
     s.setdata(3);
     s.incrementgear();
     s.showdata();
     getch();
     }


#include<iostream.h>
#include<conio.h>

class account
{
 private:
 int balance;  // <- IMV
 static float roi; // <- SMV
 public:
 void setbalance(int b)
 {
   balance=b;
   }
 void showdata()
 {
   cout<<"\nbalance="<<balance<<"\nroi="<<roi;
   }
     };
 float account::roi=3.5;

 void main()
 {
  clrscr();
  account a;
  a.setbalance(34);
  a.showdata();
  getch();
  }

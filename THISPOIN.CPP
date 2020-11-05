#include<iostream.h>
#include<conio.h>

class box
{
  int l,b,h;
  public:
  void setdimension(int l,int b,int h)
  {
   this->l=l;
   this->b=b;
   this->h=h;
   }
  void showdimension()
  {
    cout<<"\nl= "<<l<<"\nb= "<<b<<"\nh= "<<h;
    }

      };

  void main()

  {
    clrscr();
    box smallbox;
    smallbox.setdimension(12,10,5);
    smallbox.showdimension();
    getch();
    }


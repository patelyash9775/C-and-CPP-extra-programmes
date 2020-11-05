#include<iostream.h>
#include<conio.h>

class complex
{
  private:
  int a,b;
  public:
  complex(int x,int y) //parameter constuctor
  {
    a=x;
    b=y;
    cout<<"\na= "<<a<<"\nb= "<<b;
    }
  complex(int k)
  {
    a=k;
    cout<<"\na= "<<a;
    }
   complex()  //default constructor
   {
    }
	  };
    main()
    {
     clrscr();
     complex c1(3,4),c2(5);
     getch();
     }
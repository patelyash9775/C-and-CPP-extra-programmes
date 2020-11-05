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
   cout<<"\n a= "<<a<<"\n b= "<<b;
   }
  friend ostream & operator<<(ostream&,complex);
  friend istream & operator>>(istream&,complex&);
  };

  ostream & operator<<(ostream& dout,complex c)
  {
   cout<<"\na= "<<c.a<<"\nb= "<<c.b;
   return(dout);
   }
  istream & operator>>(istream& din,complex &c)
  {
   cin>>c.a>>c.b;
   return(din);
   }
   void main()
   {
    clrscr();
    complex c1;
    cout<<"enter a complex number ";
    cin>>c1;
    cout<<"You entered";
    cout<<c1;
    getch();
    }
#include<iostream.h>
#include<conio.h>



 main()
 {

  clrscr();
  cout<<"welcome";
  try
    {
     throw 10;
      cout<"\ntry";
    }
  catch(int e)
  {
   cout<<"\nexception= "<<e;
   }
  cout<<"\nlast line ";
  getch();
  }
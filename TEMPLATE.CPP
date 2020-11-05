#include<iostream.h>
#include<conio.h>

 template<class x>

 x big(x a,x b)
 {
  if(a>b)
    return(a);
  else
    return(b);
    }

  int main()
  {
   clrscr();
   cout<<big(4,5)<<endl;
   cout<<big(5.6,3.4);
   getch();
   }

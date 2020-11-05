#include<iostream.h>
#include<conio.h>

 main()

 {
   int *p=new int;
   clrscr();
   cout<<"Enter number = ";
   cin>>*p;
   cout<<*p;
   delete p;
   getch();
   }
#include<iostream.h>
#include<conio.h>
#include<fstream.h>

 void main()
 {
  clrscr();
  ifstream fin;
  char ch;
  fin.open("myfile.dat");
  fin>>ch;
  while(!fin.eof())
  {
   cout<<ch;
   fin>>ch;
   }
   fin.close();
   getch();
   }



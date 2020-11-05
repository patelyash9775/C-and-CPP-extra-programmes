#include<iostream.h>
#include<conio.h>
#include<fstream.h>


main()
{
 ifstream fin;
 fin.open("myfile.dat");
 char ch;
 clrscr();
 int pos;
 fin>>ch;
  while(!fin.eof())
 {
   cout<<ch;
   fin>>ch;

   }
 pos=fin.tellg();
 cout<<"\n"<<pos;
 getch();
 }

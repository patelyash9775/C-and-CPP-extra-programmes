#include<iostream.h>
#include<conio.h>
#include<fstream.h>

main()
{
 clrscr();
 ofstream fout;
 fout.open("abc.txt",ios::ate|ios::app);
 cout<<"\n"<<fout.tellp();
 fout.seekp(2,ios::beg);
 cout<<"\n"<< fout.tellp();
 fout.close();
 getch();
 }

#include<iostream.h>
#include<conio.h>
#include<fstream.h>

 main()
 {
  ifstream fin;
  fin.open("abc.txt");
  clrscr();
  cout<<fin.tellg();
  cout<<"\n"<<(char)fin.get();
  cout<<"\n"<<fin.tellg();
  getch();
  fin.seekg(0);
  cout<<"\n"<<(char)fin.get();
  cout<<"\n"<<fin.tellg();
  fin.seekg(2,ios::cur);
  cout<<"\n"<<fin.tellg();
  cout<<"\n"<<(char)fin.get();
  getch();
  }

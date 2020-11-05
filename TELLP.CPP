#include<iostream.h>
#include<conio.h>
#include<fstream.h>

main()
{
  ofstream fout;
  char ch;
  clrscr();
  int pos;
  fout.open("abc.txt");
  fout<<"Jay Swaminarayan";
  pos=fout.tellp();
  cout<<pos;
  fout.close();
  getch();
  }
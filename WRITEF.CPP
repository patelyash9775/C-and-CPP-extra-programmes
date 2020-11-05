#include<fstream.h>
#include<iostream.h>
#include<conio.h>

 void main()
 {

   clrscr();
   ofstream fout;
   fout.open("myfile.dat");
   fout<<"Hello students";
   getch();
   fout.close();
   getch();
   }
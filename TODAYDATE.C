#include<stdio.h>																#include()
#include<conio.h>
#include<dos.h>

 main()
 {
   struct date today;
   clrscr();
   getdate(&today);
   printf("%d / %d / %d",today.da_day,today.da_mon,today.da_year);
   getch();
   }
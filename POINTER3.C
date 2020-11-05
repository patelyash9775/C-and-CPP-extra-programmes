#include<stdio.h>
#include<conio.h>

 main()
 {
   int a,b,i,j;
   int *p,*q;
   clrscr();
   p=&a;
   q=&b;
   printf("p=%d",p);
   printf("q=%d",q);
   i=p-q;
   printf("i=%d",i);
   j=p+2;
   printf("j=%d",j);
   getch();
   }
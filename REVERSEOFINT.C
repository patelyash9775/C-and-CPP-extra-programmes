#include<stdio.h>																#include()
#include<conio.h>
main()
{
 int x,y=0,s;
 clrscr();
 printf("Enter a number");
 scanf("%d",&x);
 while(x!=0)
 {
   s=x%10;
   y=10*y+s;
   x=x/10;
   }

   printf("Reverse of int is a %d ",y);
   getch();
   }
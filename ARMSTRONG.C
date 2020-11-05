#include<stdio.h>																#include()
#include<conio.h>
main()
{
  int x,r,n,s;
  clrscr();
  printf("Armstromgs are\n");
  for(x=1;x<=1000;x++)
   {
    n=x;
    s=0;
    while(n!=0)
    {
     r=n%10;
     s=s+r*r*r;
     n=n/10;
     }
    if(x==s)
      printf("%d\n",x);
      }
  getch();
  }
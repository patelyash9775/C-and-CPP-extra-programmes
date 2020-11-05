#include<stdio.h>																#include()
#include<conio.h>

 main()
 {
  int x,i;
  clrscr();
  printf("Enter a number\n");
  scanf("%d",&x);
  for(i=2;i<x;i++)
  { if(x%i==0)
     break;
     }
   if(i==x)
     printf("%d is not a prime number",x);
   else
     printf("%d is a prime number",x);
    getch();
    }

#include<stdio.h>																#include()
#include<conio.h>

  // program to count digits//

  main()
  {
   int x,count=0;
   clrscr();
   printf("Enter a number= ");
   scanf("%d",&x);
   while(x!=0)
   {
     x=x/10;
     count++;
     }
   printf("You have entered number of count digit is = %d",count);
   getch();
   }
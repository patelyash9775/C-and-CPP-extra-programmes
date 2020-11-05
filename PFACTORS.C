#include<stdio.h>																#include()
#include<conio.h>

  main()
 {
   int x,n,i,pf;
   clrscr();
   printf("Enter a number\n ");
   scanf("%d",&x);
   for(i=2;x>1;i++)
   {
       while(x%i==0)
       {
	printf(" %d",i);
	x=x/i;
	}

	  }
      getch();
      }


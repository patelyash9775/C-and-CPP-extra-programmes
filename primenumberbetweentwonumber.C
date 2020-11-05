#include<stdio.h>
#include<conio.h>

  main()
  {
   int x,y,i,n,j;
   clrscr();
   printf("Enter a two number where we want to find all prime numbers beteen those number\n");
   scanf("%d%d",&x,&y);
   printf("All prime numbers are\n");
   for(i=x+1;i<y;i++)
   {
      n=i;

      for(j=2;j<n;j++)
      { if(n%j==0)
	 break;
	 }
       if(j==n)
	  printf("%d\n",i);
	  }
      getch();
      }


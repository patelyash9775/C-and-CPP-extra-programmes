#include<stdio.h>
#include<conio.h>

main()
{
 int a=-1,b=1,c,i,n;
 clrscr();
 printf("Enter a last no. of fibonacci ");
 scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    c=a+b;
    printf(" %d",c);
    a=b;
    b=c;
    }
    getch();
    }
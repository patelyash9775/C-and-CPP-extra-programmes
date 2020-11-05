#include<stdio.h>																#include()
#include<conio.h>

  main()
  {
    int n,i,p=1;
    clrscr();
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      p=p*i;
      }
    printf("product of number is %d",p);
    getch();
    }
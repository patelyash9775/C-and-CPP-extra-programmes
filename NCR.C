#include<stdio.h>
#include<conio.h>

 int fact(int);
 main()
 {
  int a,b,c,n,r,k;
  clrscr();
  printf("Enter n and r we can find to nCr:");
  scanf("%d %d",&n,&r);
  a=fact(n);
  b=fact(n-r);
  c=fact(r);
  k=a/(b*c);
  printf("\nnCr=%d",k);
  getch();
  }
 int fact(int n)
 {
  int i=1,j,t,x;
  for(j=n;j>0;j--)
  {
     x=j*i;
     i=x;
     }
   return(x);
   }

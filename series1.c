#include<stdio.h>


 main()
 {
  int n;
  printf("Enter term number of series = ");
  scanf("%d",&n);
  printf("%dth term is a %d",n,series(n));
  
  }
 int series(int p)
 {
  int i,j,a,b;
  i=p/2;
  if(p==1)
  {
   j=p;
   }
  else
  {
   j=(p+1)/2;
   }
  if(p%2==0)
  {
   a=6*(i-1);
   return(a);
   }
  else
  {
   b=7*(j-1);
   return(b);
    }
       }

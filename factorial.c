#include<stdio.h>
#include<conio.h>

 long fact (int n)
 {

      if(n>0)
         return(n*fact(n-1));
      else
         return(1);
 }

   main()
   {
       int a;
       printf("enter no = ");
       scanf("%d",&a);
       printf("fact of %d is %d ",a,fact(a));
       return 0;
   }

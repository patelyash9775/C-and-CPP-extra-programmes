#include<stdio.h>																#include()
#include<conio.h>

 int main()
 {
   int a,b,l;
   clrscr();
   printf("Enter a two numbers ");
   scanf("%d %d",&a,&b);
   for(l=a>b?a:b;l<=(a*b);l=l+(a>b?a:b))
       if(l%a==0 && l%b==0)
	 break;

   printf(" LCM is %d ",l);
   getch();
   }
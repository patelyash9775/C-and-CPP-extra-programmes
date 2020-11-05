#include<stdio.h>
#include<conio.h>

 //sum of count digit//

 main()
 {
   int x,r,s=0;
   clrscr();
   printf("Enter a number = ");
   scanf("%d",&x);
   while(x!=0)
   {
     r=x%10;
     s=s+r;
     x=x/10;
     }
   printf("Sum of digit is a %d",s);
   getch();
   }

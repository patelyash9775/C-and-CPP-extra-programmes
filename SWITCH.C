#include<stdio.h>
#include<conio.h>

 main()
 {
  int choice,a,b,s;
  while(1)
  {
   clrscr();
   printf("\n1.Addition");
   printf("\n2.odd-even");
   printf("\n3.printing numbers");
   printf("\n4.exit");
   printf("\nEnter your choice");
   scanf("%d",&choice);

    switch(choice)
    {
     case 1:
     printf("Ente two number");
     scanf("%d %d ",&a,&b);
     s=a+b;
     printf("Addition is %d",s);
     break;
     case 2:
     printf("Enter a number");
     scanf("%d",&a);
     if(a%2==0)
     {
       printf("even number");
       }
     else
     {
      printf("odd number");
      }
      break;
     case 3:
     printf("Enter a number");
     scanf("%d",&a);
     for(b=1;b<=a;b++)
     {
      printf("%d",b);
      }
     break;
     case 4:
     exit(0);
     default:
     printf("Invalid choice");
     }
     getch();
     }
       }



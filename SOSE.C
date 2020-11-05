#include<stdio.h>
#include<conio.h>


 main()
 {
  int a[10],i,se=0,so=0;
  clrscr();
  printf("Enter elements for array\n");
  for(i=0;i<10;i++)
    scanf("%d",&a[i]);
  for(i=0;i<10;i++)
  {

     if(a[i]%2==0)
     {
	se=se+a[i];
	}
     else
     {
      so=so+a[i];
      }
	 }

     printf("\nsum of even numbers is %d",se);
     printf("\nsum of odd numbers is %d",so);
     getch();
     }

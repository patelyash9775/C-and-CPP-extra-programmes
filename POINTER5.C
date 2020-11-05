#include<stdio.h>
#include<conio.h>

void input(int *p)
{
 int i;
 for(i=0;i<=4;i++)
 {
  scanf("%d",p+i);
  }
   }

 void display(int *p)
 {
  int i;
  for(i=0;i<=4;i++)
  {
  printf("\n%d",*(p+i));
  }
   }
 void sort(int *p)
 {
    int i,t;
    for(i=0;i<=4;i++)
    {
      for(i=0;i<=4-i;i++)
      {
	if(*(p+i)>*(p+i+1))
	{
	  t=*(p+i);
	  *(p+i)=*(p+i+1);
	  *(p+i+1)=y;
	  }

	    }
	      }
		}

  main()
  {
   int a[5];
   clrscr();
   input(a);
   display(a);
   sort(a);
   display(a);
   getch();
   }




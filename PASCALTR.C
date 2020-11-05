#include<stdio.h>
#include<conio.h>

int fact(int);
int combi(int,int);
void printpascal(int);

int fact(int n)
{
  int f=1;
  while(n>=1)
  {
   f=f*n;
   n--;
   }
   return(f);
   }

int combi(int n,int r)
{
  return(fact(n)/(fact(n-r)*fact(r)));
  }

 void printpascal(int line)
 {
   int i,j,k;
   for(i=1;i<=line;i++)
   {
     int r=0;
     for(j=i;j<=line;j++)
     {
       printf(" ");
       }
     for(k=1;k<=i;k++)
     {
       printf(" %d",combi(i-1,r));
       r++;
       }
       printf("\n");
	}
	  }
  main()
  {
   int row;
   clrscr();
   printf("Enter no, of row=");
   scanf("%d",&row);
   printpascal(row);
   getch();
   }








#include<stdio.h>
#include<conio.h>

 int sum(int a)
 {
  int s;
  if(a==1)
    return(a);
  s=a+sum(a-1);
     return(s);
         }

   int main()
   {
    int b,k;
    printf("Enter no which we can find sum of it=  ");
    scanf("%d",&b);
    k=sum(b);
    printf("sum of numbers is %d ",k);
    return 0;
     }

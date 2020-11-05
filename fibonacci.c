#include<stdio.h>
#include<conio.h>

 int fib(int n)
 {
     if(n==1||n==2)
         return(1);
     else
        return(fib(n-1)+fib(n-2));
}

int main()
{

     int n;
     printf("Enter number of term of fib series = ");
     scanf("%d",&n);
     printf("%d term is  = %d",n,fib(n));
     return 0;
}

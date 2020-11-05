#include<stdio.h>
#include<math.h>

 void prime(int a)
 { 
   int c=1,i;
   for(i=2;i<a;i++)
   {
   	 if(a%i==0)
   	 {
   	 	c=c+1;
   	 }
   }
   	 	if(c>1)
   	 	{
   	 		printf("\nentered number is a prime number");
   	 			}
   	    else
		   {
		   	printf("\nentered number is not a prime number");
					   }			
		}
   
 
  void prime(int);
  int main()
   {
   	int n;
   	printf("Enter number= ");
   	scanf("%d",&n);
   	if(n<0)
   	{
   		printf("please enter positive number");
	   }
	else
   	{   printf("Enter number is a positive"); 
		prime(n);
	  }  
	 
   }

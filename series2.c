#include<stdio.h>


 int main()
 {
  int n,i,a=1,b=1;
  printf("Enter number : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(i%2==0)
    {
    	a=a*3;
    	
	  } 
	else
	{
		b=b*2;
	   }
	  }
	 if(n%2==0) 
	 {
	 	printf("\n%d term is %d\t",n,a/3);
	 }
	 else
	 {
	 	printf("\n%d term of series is %d\t",n,b/2);
	}
   
   }

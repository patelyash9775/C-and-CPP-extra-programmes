#include<stdio.h>

 main()
 {
 	int i,j,row,n,k=0;
 	printf("Enter a row ");
 	scanf("%d",&row);
 	n=(row+1)/2;
 	for(i=1;i<=row;i++)
 	{   
 	    if(row%2==0)
 	    {
 	    	if(i<=n)
 	    	   k++;
 	    	else if(i>n+1)
			   k--;   
		 }
	 
	    else
 	        {
			 i<=n?k++:k--;
		    }
 		for(j=1;j<=row;j++)
 		{
 			if(j>=(n+1)-k && j<=(n-1)+k)
 			   printf("*");
	         	
 			else
			  printf(" ");   
		 }
		 printf("\n");
	 }
 }

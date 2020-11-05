#include<stdio.h>

 main()
 {
 	int i,j,row,k;
 	printf("Enter a row ");
 	scanf("%d",&row);
 	for(i=1;i<=row;i++)
   	{   k=1;
 		for(j=1;j<=(2*row)-1;j++)
 		{
 			if(j>=(row+1)-i && j<=(row-1)+i && k)
 			  {
			   printf("*");
			   k=0;
		       }
 			else
			  {
			  printf(" "); 
			  k=1;
	      	}
		}
		 printf("\n");
	 }
 }

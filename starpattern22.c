#include<stdio.h>

 main()
 {
 	int i,j,row;
 	char k;
 	printf("Enter a row ");
 	scanf("%d",&row);
 	for(i=1;i<=row;i++)
 	{   
 	    k='1';
 		for(j=1;j<=2*row-1;j++)
 		{
 			if(j>=(row+1)-i && j<=(row-1)+i)
 			  {
 			   if(j==(row+1))
				{ 
				  k='A';
					 }	 
			   printf("%c",k);
			   k++;
		}
 			else
			  printf(" ");   
		 }
		 printf("\n");
	 }
 }

#include<stdio.h>

 main()
 {
 	int i,j,row;
 	printf("Enter a row ");
 	scanf("%d",&row);
 	for(i=1;i<=row;i++)
 	{
 		for(j=1;j<=row;j++)
 		{
 			if(j>=(row+1)-i && j<=row)
 			  printf("*");
 			else
			  printf(" ");   
		 }
		 printf("\n");
	 }
 }

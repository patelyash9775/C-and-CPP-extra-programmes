#include<stdio.h>

 main()
 {
 	int i,j,row,k;
 	printf("Enter a row ");
 	scanf("%d",&row);
 	for(i=1;i<=row;i++)
 	{
 		k=row-i;
 		for(j=1;j<=row;j++)
 		{
 			if(j<=(row+1)-i)
 			  {
			   printf("%d",k);
			   k--;
		}
 			else
			  printf(" ");   
		 }
		 printf("\n");
	 }
 }

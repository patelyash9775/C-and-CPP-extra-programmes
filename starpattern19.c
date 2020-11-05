#include<stdio.h>

 main()
 {
 	int i,j,row;
 	char k;
 	printf("Enter a row ");
 	scanf("%d",&row);
 	for(i=1;i<=row;i++)
 	{   
 	    k='A';
 		for(j=1;j<=2*row-1;j++)
 		{
 			if(j>=(row+1)-i && j<=(row-1)+i)
 			 {
			    printf("%c",k);
			    j<row?k++:k--;
			}
 			else
			  printf(" ");   
		 }
		 printf("\n");
	 }
 }

#include<stdio.h>

 main()
 {
 	int i,j,row,n,k,r;
 	printf("Enter a row ");
 	scanf("%d",&row);
 	n=(row+1)/2;
 	k=n+1;
 	for(i=1;i<=row;i++)
 	{   i<=5?k--:k++;
 	    r=1;
 		for(j=1;j<=n;j++)
 		{
 			if(j>=k)
 			 {
			    printf("%d",r);
			    r++;
			}
 			else
			  printf(" ");   
		 }
		 printf("\n");
	 }
 }

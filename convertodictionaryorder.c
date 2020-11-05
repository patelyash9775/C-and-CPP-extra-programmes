#include<stdio.h>
#include<string.h>

 main()
 {
 	char a[5][10],s[10];
    int i,round,r;  
   	printf("Enter a 5 names\n");
 	for(i=0;i<=4;i++)
 	   gets(a[i]);
 	for(round=1;round<=4;round++)
	 {
	 	for(i=0;i<=4-round;i++)
	 	{
	 		r=strcmp(a[i],a[i+1]);
	 		if(r>0)
	 		{
	 			strcpy(s,a[i]);
	 			strcpy(a[i],a[i+1]);
	 			strcpy(a[i+1],s);
			 }
	 		
		 }
		}   
	  printf("\nall strings conver into dictionary order\n");	
	 for(i=0;i<=4;i++)
	    puts(a[i]);
	 
 }

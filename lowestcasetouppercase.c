#include<stdio.h>

 main()
 {
 	char a[20],i=0;
 	printf("Enter a string");
 	gets(a);
 	while(a[i]!='\0')
	 {
	 	if(a[i]>='a' && a[i]<='z')
	 	{
	 		a[i]=a[i]-32;
			 		 }
		i++;
		  } 
    printf("\nAll character into upper case is ");
	printf("%s",a);	  
		  	
 }

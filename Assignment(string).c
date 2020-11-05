#include<stdio.h>
#include<string.h>

  pelindrom(char str1[])
 {  
    int i,j=0;
 	int l=strlen(str1);
 	for(i=0;i<=l/2;i++)
 	   {
 	   	if(str1[i]==str1[l-1-i])
 	   	  j++;
		}
   (j==(l/2+1))?printf("%s is a pelindrom",str1):printf("%s is not a pelindrom",str1);  		
 }
 occurence(char str1[])
 {
 	int i,j,l=0;
 	for(j=0;j<strlen(str1)-1;j++)
 	{
	 
 	for(i=j;i<=strlen(str1)-1;i++)          
 	  {
 	  	if(str1[j]==str1[i+1])
 	  	   l++;  
	   }
	   }
	l>0?printf("\n%s has duplicate character",str1):printf("\n%s has not duplicate character",str1);
}
 
  strcompare(char str1[],char str2[])
  {
  	int i,l=0;
  	for(i=0;i<strlen(str1);i++)
  	{
  		if(str1[i]!=str2[i])
  		  l++;
	  }
	l>0?printf("\nEnter two strings are not same"):printf("\nEnter two strings are same");  
  }
int main()
 {
 	char str1[20],str2[10];
 	printf("Enter a string 1");
 	gets(str1);
 	printf("Enter a string 2");
 	gets(str2);
 	pelindrom(str1);
 	printf("\n");
 	pelindrom(str2);
 	occurence(str1);
 	occurence(str2);
 	strcompare(str1,str2);
 }

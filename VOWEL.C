#include<stdio.h>
#include<conio.h>

int length(char*ch)
{
  int a=0;
  while(*ch!='\0')
  {
   a++;
   ch++;
   }
   return(a);
   }

 int vowel(char*ch)
 {
  char v[10]={'a','e','i','o','u','\0'};
  int count=0,j;
  while(*ch!='\0')
  {
    for(j=0;j<5;j++)
    {
      if(*ch==v[j])
      {
	count++;
	}
     }
      ch++;
  }
   return(count);
   }

main()
{
 char s[100];
 int i,a,b;
 clrscr();
 printf("Enter a string: ");
 gets(s);
 a=length(s);
 b=vowel(s);
 printf("vowels = %d",b);
 printf("\nconsonant = %d",a-b);
 getch();
 }

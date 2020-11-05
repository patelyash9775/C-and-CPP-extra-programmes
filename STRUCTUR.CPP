#include<iostream.h>
#include<conio.h>

struct book
{
 int bookid;
 char title[20];
 float price;
 };

book input()
{
 struct book b;
 cout<<"Enter book id ,title and price of book";
 cin>>b.bookid>>b.title>>b.price;
 return(b);
 }

 void display(book b)
 {
   cout<<"\n"<<b.bookid<<"  "<<b.title<<"  "<<b.price<<"  ";
   }
main()
{
  struct book b;
  clrscr();
  input();
  display(b);
  getch();
  }


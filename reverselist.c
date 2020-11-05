#include<stdio.h>


 struct node
 {
   int info;
   struct node *link;
   };
 struct node *START=NULL;

 struct node* creatnode()
 {
   struct node *n;
   n=(struct node *)malloc(sizeof(struct node));
   return(n);
   }

 void insertnode()
 {
    struct node *temp,*t;
    temp=creatnode();
    printf("Enter number");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(START==NULL)
    {
      START=temp;
      }
     else
     {
      t=START;
      while(t->link!=NULL)
      {
       t=t->link;
       }
      t->link=temp;
      }
	 }
   void deletenode()
   {
     struct node *r;
     if(START==NULL)
     {
      printf("list is empty");
      }
      else
      {
       r=START;}
       START=START->link;
       free(r);
       }
     void viewlist()
     {
      struct node *t;
      if(START==NULL)
      {
       printf("List is empty");
       }
      else
      {
       t=START;
       while(t!=NULL)
       {
	printf(" %d",t->info);
	t=t->link;
	}
	  }
	     }
	 
	 struct node* reverse()
	 {
	 	struct node *t1=NULL;
	 	struct node *t2=NULL;
	 	while(START!=NULL)
	 	{
	 		t2=START->link;
			START->link=t1;
			t1=START;
			START=t2;  
		 }
		 return(t1);
		 }    
	 void finalreverse()
	 {
	 	START=reverse();
		   } 	 

    int menu()
    {
      int ch;
      printf("\n1.Add value to the list");
      printf("\n2.Delete first value");
      printf("\n3.view list");
      printf("\n4.reverse");
      printf("\n5.Exit");
      printf("\nEnter your choice");
      scanf("%d",&ch);
      return(ch);
      }
    void main()
    {
     while(1)
     {
      
      switch(menu())
      {
       case 1:
       insertnode();
       break;
       case 2:
       deletenode();
       break;
       case 3:
       viewlist();
       break;
       case 4:
       finalreverse();
       break;
       case 5:
       exit(0);
       default:
       printf("\nInvalid choice");
       }
    
       }
	 }




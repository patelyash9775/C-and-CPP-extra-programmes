#include<stdio.h>

   struct node
   {
   	int data;
   	struct node *next;
   };
   
   void display(struct node *last)
   {
   	struct node *t;
   	if(last==NULL)
   	{
   		 printf("List is empty");
	   }
	else
	{
		t=last->next;
		do
		{
			printf("%d ",t->data);
			t=t->next;
		}while(t!=last->next);
	       }   
   } 
  
  struct node* addatbeg(struct node *last,int value)
  {
  	struct node *n;
  	n=(struct node *)malloc(sizeof(struct node));
  	n->data=value;
  	n->next=last->next;
  	last->next=n;
  	return(last);
  }
  
  struct node* addtoempty(struct node *last,int value)
  {
  	struct node *n;
  	n=(struct node*)malloc(sizeof(struct node));
  	n->data=value;
  	last=n;
  	last->next=last;
  	return(last);
  }
  
  struct node* addatend(struct node *last,int value)
  {
  	struct node *n;
  	n=(struct node*)malloc(sizeof(struct node));
  	n->data=value;
  	n->next=last->next;
  	last->next=n;
  	last=n;
  	return(last);
  }
  
  struct node* addafter(struct node *last,int value,int item)
  {
  	struct node *t,*n;
  	t=last->next;
  	do
  	{
  		if(t->data==item)
  		{
      	n=(struct node*)malloc(sizeof(struct node));
  	    n->data=value;
        n->next=t->next;
		t->next=n;
		if(t==last)
		    last=n;
	    return(last);	 }
	    t=t->next;
	    }while(t!=last->next);
	    printf("%d is not in he list ",item);
	    return(last);
  }
  
  struct node* del(struct node *last,int value)
  {
  	struct node *t,*p;
  	if(last==NULL)
  	{
  		 printf("List is empty");
  		 return(last);
	  }
	if(last==last->next && last->data==value)
	{
		t=last;
		last=NULL;
		free(t);
		return(last);
	  }  
	if(last->next->data==value)
	{
		t=last->next;
		last->next=t->next;
		free(t);
		return(last);
	  }  
	
	p=last->next;
	while(p->next!=last)
	{
		if(p->next->data==value)
		{
			t=p->next;
			p->next=t->next;
			free(t);
			return(last);		
		}
		 p=p->next;
	}
	if(last->data==value)
	{
		t=last;
		p->next=last->next;
		last=p;
		free(t);
		return(last);
		
	}
	printf("%d is not found ",value);
	return(last);
  }
  
  struct node* createlist(struct node *last)
  {
  	int n,i,value;
  	printf("How many values you want to enter");
  	scanf("%d",&n);
  	printf("enter first data for the list");
  	scanf("%d",&value);
  	last=addtoempty(last,value);
  	for(i=2;i<=n;i++)
  	{
  		printf("Enter data for the list");
  		scanf("%d",&value);
  		last=addatend(last,value);
	  }
	  return(last);
  	
  }
  
  
  main()
  {
  	int choice,value,item;
  	struct node *last=NULL;
  	while(1)
  	{   
  		printf("\n1.createlist");
  		printf("\n2.Displaylist");
  		printf("\n3.Add to emptylist");
  		printf("\n4.Add at beginning");
  		printf("\n5.Add at end");
  		printf("\n6.Add after some node");
  		printf("\n7.Delete");
  		printf("\n8.exit");
  		printf("\n\nEnter your choice");
  		scanf("%d",&choice);
  		
  		switch(choice)
  		{
  			case 1:
  				last=createlist(last);
  				break;
  			case 2:
			    display(last);
				break;
			case 3:
			    printf("Enter a number for the list");
				scanf("%d",&value);
				last=addtoempty(last,value);
				break;
		    case 4:
			    printf("Enter a number for the list");
				scanf("%d",&value);
				last=addatbeg(last,value);
				break;
			case 5:
			    printf("Enter a number for the list");
				scanf("%d",&value);
				last=addatend(last,value);
				break;
			case 6:
			    printf("Enter a number for the list");
				scanf("%d",&value);
				printf("\nEnter item");
				scanf("%d",&item);
				last=addafter(last,value,item);
				break;
		    case 7:
			    printf("Enter a number for the list");
				scanf("%d",&value);
				last=del(last,value);
				break;
			case 8:
			    exit(0);
			default:
			    printf("\ninvalid choice");
			}
						 		
	  }
	  
  }

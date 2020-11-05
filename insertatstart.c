#include<stdio.h>

 struct node
 {
 	 struct node *prev;
 	 int info;
 	 struct node *next;
 };
 
  void insertstart(struct node **s,int data)
  {
  	struct node *p;
  	p=(struct node*)malloc(sizeof(struct node));
  	p->info=data;
  	p->prev=NULL;
  	p->next=*s;
  	*s=p;
  	
  }

 main()
 {  int data,t;
 	struct node *start=NULL;
 	printf("Enter data");
 	scanf("%d",&data);
 	t=data;
 	insertstart(&start,t);
    
 }

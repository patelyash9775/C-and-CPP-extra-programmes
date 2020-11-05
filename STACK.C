#include<stdio.h>
#include<conio.h>

 struct Arraystack
 {
   int top;
   int capacity;
   int *array;
   };

 struct Arraystack* createstack(int cap)
 {
   struct Arraystack *stack;
   stack=(struct Arraystack*)malloc(sizeof(struct Arraystack));
   stack->capacity=cap;
   stack->array=(int *)malloc(sizeof(int)*stack->capacity);
   return(stack);
   }
 int isfull(struct Arraystack *stack)
 {
   if(stack->top==stack->capacity-1)
   return(1);
   else
   return(0);
   }
 int isempty(struct Arraystack *stack)
 {
  if(stack->top==-1)
  return(1);
  else
  return(0);
  }
 void push(struct Arraystack *stack,int item)
 {
   if(!isfull(stack))
   {
     stack->top++;
     stack->array[stack->top]=item;
     }
	}

 int pop(struct Arraystack *stack)
 {
   int item;
   if(!isempty(stack))
   {
    item=stack->array[stack->top];
    stack->top--;
    return(item);
    }
    return(-1);
    }
  main()
  {
    int choice,item;
    struct Arraystack *stack;
    stack=createstack(4);
    while(1)
    {
      clrscr();
      printf("\n1.push");
      printf("\n2.pop");
      printf("\n3.exit");
      printf("\nEnter your choice");
      scanf("%d",&choice);
      switch(choice)
      {
       case 1:
	 printf("\nEnter a number");
	 scanf("%d",&item);
	 push(stack,item);
	 break;
       case 2:
	  item=pop(stack);
	  if(item==-1)
	     printf("stack is empty");
	  else
	    printf("\npoped value is %d",item);
	  break;
       case 3:
	  exit(0);
	  }
	  getch();
	  }
	    }
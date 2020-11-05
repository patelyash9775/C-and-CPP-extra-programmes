#include<stdio.h>
#include<conio.h>

 struct queue
 {
  int rear,front;
  int capacity;
  int *array;
  };

 struct queue* createqueue(int capacity)
 {
   struct queue *q;
   q=(struct queue *)malloc(sizeof(struct queue));
      if(!q)
     return(NULL);
   q->capacity=capacity;
   q->front=q->rear=-1;
   q->array=(int *)malloc(sizeof(int)*q->capacity);
   if(!q->array)
      return(NULL);
   return(q);
   }

   int isemptyqueue(struct queue *q)
   {
    return(q->front==-1);
    }

   int fullqueue(struct queue *q)
   {
    return((q->rear+1)%q->capacity==q->front);
    }

   int queuesize(struct queue *q)
   {
    return((q->capacity-q->front+q->rear+1)%q->capacity);
    }

   void enqueue(struct queue *q,int data)
   {
    if(fullqueue(q))
	printf("overflow");
    else
      {
       q->rear=(q->rear+1)%q->capacity;
       q->array[q->rear]=data;
       if(q->front==-1)
	 q->front=q->rear;
	 }
	   }

  int dequeue(struct queue *q)
  {
   int data=-1;
   if(isemptyqueue(q))
   {
     printf("queue is empty");
     return(-1);
     }
     else
     {
      data=q->array[q->front];
      if(q->rear==q->front)
	 q->front=q->rear=-1;
      else
	 q->front=(q->front+1)%q->capacity;
	 }
      return(data);
      }

    main()
    {
     struct queue *q;
     int value,choice;

     while(1)
     {
     clrscr();
     printf("\n1.createqueue");
     printf("\n2.insert element");
     printf("\n3.size");
     printf("\n4.delete element");
     printf("\n5.exit");
     printf("\nEnter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1:
	     printf("Enter capacity");
	     scanf("%d",&value);
	     q=createqueue(value);
	     break;
       case 2:
	printf("Enter value for queue:");
	scanf("%d",&value);
	enqueue(q,value);
	break;
      case 3:
	value=queuesize(q);
	printf("size is %d",value);
	break;
      case 4:
	value=dequeue(q);
	printf("%d",value);
	break;
      case 5:
	exit(0);
	}
       getch();
       }
	 }







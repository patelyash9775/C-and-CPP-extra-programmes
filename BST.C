#include<stdio.h>
#include<conio.h>

struct BST
{
 int data;
 struct BST *right;
 struct BST *left;
 };
 struct BST * create(int n)
 {
   struct BST *p;
   p=(struct BST *)malloc(sizeof(struct BST));
   p->data=n;
   p->left=p->right=NULL;
   return(p);
   }

 struct BST * insert(struct BST *root,int n)
 {
    if(root==NULL)
    {
     root=create(n);
     }
    else if(n<=root->data)
    {
     root->left=insert(root->left,n);
     }
     else
     {
       root->right=insert(root->right,n);
       }
       return(root);
       }
  int search(struct BST *root,int n)
  {
    if(root==NULL)
       return(0);
    else if(n==root->data)
       return(1);
    else if(n<=root->data)
       return(search(root->left,n));
    else
       return(search(root->right,n));
       }

 main()
 {
  struct BST *root=NULL;
  int choice,n;
  while(1)
  {
   clrscr();
   printf("\n1.insertion");
   printf("\n2.searching");
   printf("\n3.exit");
   printf("\nEnter your choice");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:
      printf("\nEnter number for BST ");
      scanf("%d",&n);
      root=insert(root,n);
      break;
    case 2:
      printf("\nEnter a number for search");
      scanf("%d",&n);
      n=search(root,n);
      if(n==1)
	printf("your searching is successful");
	break;
    case 3:
      exit(0);
      }
      getch();
      }
	}



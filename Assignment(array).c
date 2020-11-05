#include<stdio.h>
#define capacity 5


 int insertatindex(int a[],int n,int index,int newele)
 {       int i;
         if(index>=capacity)
         {
            printf("\nEnter index no. is not available");
            return(n);
         }
         else
         {
             for(i=n;i>index;i--)
             {
                 a[i]=a[i-1];
             }
             a[index]=newele;
             return(n+1);
         }

 }

 int deleteatfirst(int a[],int n)
 {   int i;
     for(i=0;i<n;i++)
         a[i]=a[i+1];
     return(n-1);
 }
Traverserev(int a[],int n)
 {  int i;
    for(i=n-1;i>=0;i--)
        printf(" %d",a[i]);
}
 int main()
  {
      int a[capacity],n,i,newele;
      printf("How many elements we want to add array = ");
      scanf("%d",&n);
      printf("\nEnter elements");
      for(i=0;i<n;i++)
         scanf("%d",&a[i]);
      printf("Enter a index no. where we want to ");
      scanf("%d",&i);
      printf("\nEnter a new element");
      scanf("%d",&newele);
      n=insertatindex(a,n,i,newele);
      n=deleteatfirst(a,n);
      printf("\nTraver in reverse order of array is ");
      Traverserev(a,n);
  }

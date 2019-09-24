#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

struct node
	 { 
	   int data; 
	   node * next; 
	 } ; 

void displayList(node*head);
node * createLinkList(int);
int checkCircle (struct node*list);


int main()
 {
   int n =0;
   struct node *HEAD=NULL; 
   printf("\n enter number of node:");
   scanf("%d",&n); 
   HEAD=createLinkList(n); 
   displayList(HEAD);
   HEAD->next->next->next->next=HEAD; 
   checkCircle (HEAD);
   
   return 0;
 }


node * createLinkList(int size)
{ 
  int i =0; 
  node* head =NULL;
  node* current =NULL; 
  
  if(size==0)
   {
    return NULL;
   }
  
  head=(node*)malloc(sizeof(node));
  head->data=i;
  head->next=NULL;
  current=head;
   for (i=1; i<size; i++)
    {
	     current->next=(node*)malloc(sizeof(node)); 
	     current=current->next; 
             current->num=i;
    }    
	     
	    current->next=NULL; 
    

   return head; 
}


void displayList( node*HEAD)
{
  node *p=head; 
   
   while(p->next!=NULL)
    {
      printf("\t%d->",p->num);
    }

}

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
int isCircle (node*head);
node * flip(node * head);


int main()
 { node * s1;
   node * s2;
   int size =0;
   printf("\n enter number of node:");
   scanf("%d",&size); 
   s1 =createLinkList(size); 
   displayList(s1);
   s1=flip(s1);

   
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


void displayList( node*head)
{
  node *current=head; 
   if(isCircle(head)==0)
    {
      while(current!=NULL)    
    {
      printf("\t%d->",current->num);
      current=current->next; 
    }
  printf("\n"); 
}


void isCircle ()
 {
   in


 }


node * flip( node* head)
{
  node* current=head;
  node* prev=NULL;
  node* nextt=NULL;

  while(current!=NULL)
   {
     nextt=current->next;
     current->next=prev;
     prev=current;
   }





}

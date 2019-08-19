#include <stdio.h>
#include <stdlib.h>
#include "header.h"



Da_t * create(int capacity)
 {

	   ARRAY_T * da;
           da=(ARRAY_T*) malloc(sizeof(ARRAY_T));
           if(da==NULL)
           {
              return NULL;
           }

           da->capacity=capacity;
	   da->count=0;
           da->arr=malloc(sizeof(int)*capacity);
           if(da->arr==NULL)
           {
            free(da);
            return NULL;
           }
	   

    return da;
}



int insert(ARRAY_T* da,int num){
  
  int * temp;
  if(da!=NULL)
  {
      temp=da->arr;
      if((da->count)==(da->capacity))
        {
          temp=(int *)realloc(da->arr, sizeof(int)*((da->capacity)*2)); 
           if(temp!=NULL)
           {
             da->arr=temp;
             (da->capacity)*=2;
           }
            else
            {
             return 0;
            }    
      }
       da->arr[da->count]=num;
       (da->count)++;
  
    return 1;
   }
  return 0;
}



void print(ARRAY_T* da)
{
   int i=0;
  if(da!=NULL)
    {
    for(i=0;i<da->count;i++)
     {
       printf(" %d",da->arr[i]);
    }
     }

}


void destroy(ARRAY_T* da)
 {
  if(da!=NULL)
   {
         free(da->arr);
         free(da);
   }
  

 }


# include <stdio.h> 
# include <stdlib.h>
# include "darray.h"

 typedef struct darray
{ 
   int current_cappacity;
   int initial_capacity;
   int *arr;
   int last_index;

 }dArr; 

AdtStatus darrayCreate(darray **dArr, size_t initial_capacity)  /*למה צריך **    */
{ 
	  *dArr= (darray*)malloc(sizeof (darray)) /*לשאול למה לא מכפילים באיזשהו משתנה*/
	   if(dArr== NULL)  */אם אני עושה בסוגריים if (!*dArr) זה אותו דבר*/
	    {
	     return AllocationError;
	    }
	   
	   (*dArr)->arr=(int*)malloc ( sizeof ( int)*initial capacity; /* האם פה אינט כוכבית נמצא במקום לפני המלוק*/
	   if((*dArr)->arr==NULL)
	    {
	     retutn AllocationError;
	    }

  (*darr)-> last_index=0; 
  (*darr)-> current_capacity= initial_capacity; 
  (*dArr)->initial_capacity = initial_capacity; /*לבדוק מה זה בדיוק*/
  return OK; 
}


AdtStatus darrayDestroy(darray *dArr);

{
	  if(dArr==NULL)            /*למה חייב לשאול את זה כאן .מה זה משנה בכל זאת אני משחרר את הזכרון בהמשך?*/
	   {
	    return AllocationError; 
	   }

	  free( (*dArr)->arr);
	  free(*dArr);
}



AdtStatus darrayAdd(darray *dArr,  int  _item);
{    
    int *tempArr;/* על מנת ונוסיף משתנה זה אומר שצריכים ליצור מערך חדש שיאפשר להעתיק לשם את מה שקיים ולהוסיף את החדש*/
    if (*dArr==NULL)
     {
       return AllocationError;
     }
     
     if( *dArr->last_index==dArr->current_capacity)
      { 
       temp=realloc((*dArr)->arr, sizeof (int)*((*dArr)->current_cappacity)*2);/*בעקרון על כל אידקס נוסף אני מכפיל כמות ב 2*/
       if(temp==NULL)
        {
         return AllocationError;
        }
      }

  *dArr->arr=*tempArr;
  *darr->current_capacity=current_capacity*2; 
  *darr->last_index++;

  return OK; 
}

AdtStatus darrayDelete(darray *dArr,  int* _item);
{
  if (dArr==NULL)
   {
     return AllocationError; 
   }
    * _item=dArr->arr[dArr->last_index];
    dArr->last_index--;
    
 

  dArr->arr=realoc(dArr->arr, sizeof(int)*darr->current_capacity/2; 
  dArr->current_capacity= current_capacity/2;

 
  return OK; 
}  

AdtStatus printDarray(darray *dArr)
{ 
  int i;
	  if (dArr==NULL)
	   {
	     return AllocationError; 
	   }
	    for(i=0; i<dArr->last_index;i++)
             { 
              printf("%d",dArr->arr[i]); 
             }
             return OK;
}


AdtStatus sortDarray(darray *dArr)
 {
  int i,j;/* יש תמונה בטלפון לגביי SWAP*/
  
   f (dArr==NULL)
	   {
	     return AllocationError; 
	   }
	    for(i=0,i<dArr->last_index-1;i++)
	     {
	      for(j=0;j<dArr->last_index-1;j++)
	       {
		if(dArr->arr[j]>dArr->arr[j+1])
		 {
		   int temp;
		   temp=dArr->arr[j];
		   dArr->arr[j]=dArr->arr[j+1];
		   dArr->arr[j+1]=temp;
                 }
               }
             }
    return OK;
  }
         








}


  
   
 
  

AdtStatus   darrayItemsNum(darray *dArr, int*  _numOfItems);
{



   
  

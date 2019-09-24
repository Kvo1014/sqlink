#include <stdio.h>
#include "darray.h"

int main()

{ int ans=0; 
  unsigned int option = 0;
  int intial_capacity=0;
  int cont=1;
  int numAdd=0;

  darray *dArr; 

  printf("please enter the capacity:\n");
  scanf ( "%d", &intial_capacity);/*למה צריך פה %LU*/
  darrayCreate(&dArr,initial_capacity);
  while (numAdd==-1)
   {
    printf("enter a num to add or -1 to stop\n");
    scanf("%d",&numAdd);
    if (numAdd==-1)
     {
      break; 
     }
   darrayAdd(dArr,numAdd);
   }
  printf("your array is:");
  printArray(dArr); /*קשה לי להבין מה צריך לשים בסוגריים*/
  printf("your array after sort:");
  darraySort(dArr); 
  

 


  
  
 
 
 


#include <stdio.h>
#include <stdlib.h>

int isOdd (int a)
 {
   return (a%2!=0); 
 }

 unsigned int filter (int*arr, unsigned size, int (*pred)(int), int **out)
 {
     unsigned i;
     unsigned j; 
     *out= (int *) malloc(sizeof(int)*size);
     for(i=0,j=0;i<size;i++)
      if(pred(arr[i]))
      {
          (*out)[j]=arr[i];
          j++;
      }
      *out=(int*)realloc(*out,j*sizeof(int));
      return j;
 }



 void main()
 {
   int a[]= {1,2,3,4,5,6,7,8,9,10};
   int *aOdd=NULL;
   unsigned i;
   unsigned size; 
    size= filter(a,10,isOdd,*aOdd);
    for (i=0;i<size;i++)
     {
        printf("%d",aOdd[i]);
     }
    free(aOdd);
 }
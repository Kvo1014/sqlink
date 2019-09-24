#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define count 100

void* countThread (void *arg)
 {
   int local;
   local= count;
   local++;
   count=local; 
 }


 int main()
  {
   int status; 
   int i;
   pthread_t tid {THREAD_COUNT};
    
     for (i=0; i<THREAD_COUNT ;i++)
      {
       status= pthread_create (&tid[i],NULL,countThread,NULL); 
      }
  }
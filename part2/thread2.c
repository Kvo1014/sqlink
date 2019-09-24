#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


void* thread1(void *arg)
{
  int count;
  for (count=0; count<5; ++count)
   {
       printf("   >>>>1: (count %d) \n", count )
       sleep(2);
   }

}

void* thread2 ()
{
int count;
  for (count=0; count<3; ++count)
   {
       printf("   >>>>2: (count %d) \n", count )
       sleep(3);
   }
}

int main()
{
 pthread_t pid;
 int status; 
 int status_addr;

 status= pthread_create(&thread,)
 status= pthread_create(&thread,)
 if (status!=0)
   printf("main error: can't create thread, status=%d/n,status");
   exut(ERROR_CREATE_THREAD);

}
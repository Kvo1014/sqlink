#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t* cond = NULL; 

int threads; 
volatile int cnt=0;


void* newThread(void* arg)
 {
   int turn = *(int*)arg;
   
    while(1)
    {
      pthread_mutex_lock(&mutex);
      if (turn!=cnt)
        {
            pthread_cond_wait(&cond[turn],&mutex);
        }
      printf("%d",turn+1);
      if(cnt< threads-1)
        {
            cnt++;
        }
        else 
        {
            cnt=0;
        }
        pthread_cond_signal(&cond[cnt]);
        pthread_mutex_unlock(&mutex);
    }  
    rerurn NULL; 
 }


int main()
 {
   pthread_t* tid;
   volatile int i;
   int* arr;
   
   printf("please enter number of threads:");
   scanf("%d",&threads);

   cond= (pthread_cond_t*)malloc(sizeof(pthread_cond_t)*threads);
   tid= (pthread_t*)malloc(sizeof(pthread_t)* threads);
   arr= (int*)malloc (sizeof(int)*threads);
   
   for(i=0;i<threads;i++)
    {
      arr[i]=i;
      pthread_create(&tid[i],NULL,newThread,(void*)arr[i]);
    }
   for (i=0; i<threads;i++)
    {
        pthread_join(tid[i],NULL);
    }
    return 0 ;
 }
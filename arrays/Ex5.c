#include <stdio.h>


void swap(int*,int*);
void sortArr(int[],int);
int mostPopular(int[],int );
void swap(int*, int*);



int main()
{ int i=0;
  int result=0;
  int arr[10]={12,3,8,3,9,4,5,4,3,8};

  result=mostPopular(arr,10);
     printf("%d\n",result);
      
}



int mostPopular(int arr[],int n)
{
  int i=0;
  int counter=1;
  int max=0;
  int current=0;
  int next=1;
  int most=0; 
  sortArr(arr,10);
    for(current=0;current<n;current++)
      { 
            if(arr[current]==arr[current+1])
              {
               counter++; 
              }
            else if(counter>max)
              {
               max=counter;
               most=arr[current];
              }
              
               counter=1;
      }

 return most;
}

       



void sortArr(int arr[],int n)
{
   int current=0;
   int next=1;
   int i=0;
     for(current=0;current<n;current++)
      { 
        for(next=current+1;next<n;n++)
        {
          if(arr[current] > arr[next]);
           {
             swap(&arr [current],&arr[next]);
           }
        }
      }
     
}



void swap(int* x, int* z)
{

  int temp=0;
  temp=*x;
  *x=*z;
  *z=temp;
}




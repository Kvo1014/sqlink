#include <stdio.h>

void sortArray(int[],int);
void swap (int*,int*);


int main()
{ int i=0;
  int arr[10]={1,3,6,7,10,0,-9};
  sortArray(arr,8);
    for(i=0;i<8;i++)
     { printf("%d",arr[i]);
     }

}

void sortArray(int arr[],int size)
 { int i=0;
   int next_number=1;
   int current_number=0;
    for(current_number=0;current_number<size;current_number++)
    {
       for(next_number=current_number+1; next_number<size ;next_number++)
        {
          if (arr[current_number]>arr[next_number])
           {
             swap(&arr[current_number],&arr[next_number]);
           }
        }

     }

  }
 


void swap(int* i,int* y)
{
  int temp=0;
  temp=*i;
  *i=*y;
  *y=temp;
}


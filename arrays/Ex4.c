#include <stdio.h>

void swap(int*, int*);
void OddAndEven(int[],int);

int main()
{

	int i=0;
	int arr[9]= {1,2,3,4,5,6,7,8,9};
	
	OddAndEven(arr,9);

	for (;i<9;i++)
        {
         printf("%d",arr[i]);	
	}

}

void swap(int* x, int* z){
	int temp =0;
        temp=*x;
	*x = *z;
	*z = temp;
}

void OddAndEven(int arr[], int size)
{
	int current = 0;
	int next = 1;
	for (;current<size;current++)
         {
           for(next=current+1;next<size;next++)
                {
	          if (arr[current]%2==1 && arr[next]%2==0)
                        {
			  swap(&arr[current],&arr[next]);
			}		
		}	
	 }
}
	


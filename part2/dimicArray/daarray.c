#include <stdio.h>
#include <stdlib.h>
#include "darray.h"

struct darray
{
    int * arr;
    size_t initial_capacity;
    size_t current_capacity;
    size_t lastIndex;
   
};

AdtStatus   darrayDelete(darray *dArr,  int* _item)
{
    if (!dArr)
    {
        return AllocationError;
    }

    *_item = dArr->arr[dArr->lastIndex];
    dArr->lastIndex--;
    if (dArr->lastIndex == 0)
    {
        return AllocationError;
    }

    if ((dArr->lastIndex         <=   dArr->current_capacity/3)   && 
        (dArr->initial_capacity  <    dArr->current_capacity/2))
    {
        dArr->arr = realloc(dArr->arr, sizeof(int)*(dArr->current_capacity/2));
        dArr->current_capacity /=2;
    }
    return OK;
}


AdtStatus   darrayGet(darray *dArr, size_t _index, int *_item)
{
    if (!dArr || _index > dArr->lastIndex)
    {
        return AllocationError;
    }
    *_item = dArr->arr[_index];
    return OK;
}


AdtStatus   darraySet(darray *dArr, size_t _index, int  _item)
{
     if (!dArr || _index > dArr->lastIndex)
    {
        return AllocationError;
    }
    dArr->arr[_index] = _item;
    return OK;
}


AdtStatus darrayCreate(darray **dArr, size_t initial_capacity)
{
    *dArr = malloc(sizeof(darray));
    if (!(*dArr))
    {
        return AllocationError;
    }
    (*dArr)->arr = malloc(sizeof(int)*initial_capacity);
    if (!((*dArr)->arr))
    {
        free(*dArr);
        return AllocationError;
    }
     (*dArr)->lastIndex =  0;
     (*dArr)->current_capacity  =  initial_capacity;
     (*dArr)->initial_capacity = initial_capacity;
     return OK;
}


AdtStatus darrayDestroy(darray *dArr)
{
    if (!dArr)
    {
            return AllocationError;
    }
    free(dArr->arr);
    free(dArr);
    return OK;
}


AdtStatus  darrayAdd(darray *dArr,  int  _item)
{
    int* tempArr;

    if (!dArr)
    {
            return AllocationError;
    }
    if (dArr->lastIndex == dArr->current_capacity)
    {
        tempArr = realloc((dArr->arr),sizeof(int)*(dArr->current_capacity)*2);
        if (!tempArr)
        {
            return AllocationError;
        }
    }
    *dArr->arr = *tempArr;
    dArr->current_capacity*=2 ;
    dArr->arr[dArr->lastIndex] = _item; 
    dArr->lastIndex++ ;
    return OK;
}


AdtStatus darraySort(darray *dArr)
{
    int temp = 0 ;
    int i = 0 , j = 0 ;
    int sorted_check=0;

    if (!dArr)
    {
        return AllocationError;
    }

    for (i=0; i<dArr->lastIndex-1; i++)
    {
        for (j=0; j<dArr->lastIndex-i-1; j++)
        {
            if (dArr->arr[j] > dArr->arr[j+1])
            {
                temp = dArr->arr[j];
                dArr->arr[j] = dArr->arr[j+1];
                dArr->arr[j+1] = temp;
                sorted_check == 1;
            }
        }

        if (sorted_check ==0)
        {
            break;
        }
    }
    return OK;
}


AdtStatus   darrayItemsNum(darray *dArr, int*  _numOfItems)
{
    if (!dArr)
    {
        return AllocationError;
    }
    *_numOfItems = dArr->lastIndex;
    return OK;
}

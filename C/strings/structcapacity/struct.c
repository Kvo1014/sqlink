#include <stdio.h>
#include <stdlib.h>

#include "Header.h"

struct DA_t* createDA(int capacity){

	struct DA_t* dptr= (struct DA_t*) malloc (sizeof(struct DA_t)); 
	if (dptr==NULL)
        {
		return NULL;
	}
	
	dptr->arr = (int*) malloc (capacity* sizeof (int));
	if ((dptr->arr)==NULL)
{
		free(dptr);
		return NULL;
	}
	
	dptr->capacity = capacity;	
	dptr->index=0;
	
	return dptr;

int insert(int num,struct DA_t* dptr)
{
        struct DA_t* temp=dptr;
	int i=0;
	if (((dptr->index)+1)>(dptr->capacity))
        { 
		temp->arr = dptr->arr;		 
		temp->arr = (int*)realloc(dptr->arr,((dptr->index)*2)*sizeof(int));
		
		(dptr->capacity)*=2; 

		if (temp->arr == NULL)
                { 
			printf("Not MEMORY"); 
			dptr->arr = temp->arr;
			return 0;
		}
	}
	
        (dptr->arr)[(dptr->index)++] = num;
	return 1;
}  



}

void printDA(struct DA_t* dptr)
{ 
        int i=0;
	for (; i<(dptr->index); i++)
        {
		printf("%d", dptr->arr[i]);
	}
	printf("\n");
}


void destroy(struct DA_t* a)
{ 
	free(a->arr); /*FIRST FREE ARRAY*/
	free(a);
	return;
}

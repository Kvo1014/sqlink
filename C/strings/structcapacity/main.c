#include <stdio.h>
#include <stdlib.h>

#include "Header.h"

 typedef int l;

	int main()
 {
		
		int capacity=0, num=0;
		struct DA_t* dynArrSt = NULL;
		
		printf("Enter Size of Array:\n");
		scanf("%d",&capacity);

		dynArrSt = createDA(capacity); 

		while(1)

               {
		
			printf("Insert number:");
			scanf("%d",&num);

			if (num==-1) {break;}
			insert(dynArrSt, num); 
		}
			printf("\n");

			printDA(dynArrSt); 
			
			destroy(dynArrSt); 
 }

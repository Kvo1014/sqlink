#ifndef HEADER_h
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>

		struct DA_t 
                {       
			int index;
			int capacity;
			int  arr [];	
		};
		struct DA_t* createDA(int capacity);

		int insert(struct DA_t* dptr, int int);

		void printDA(struct DA_t*);

		void destroy(struct DA_t*);

		#endif

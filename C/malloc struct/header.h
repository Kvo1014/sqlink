#ifndef ARRAY_T
#define ARRAY_T

typedef struct{

int capacity;
int count;
int * arr;

}ARRAY_T;


Da_t * create(int capacity);
int insert(ARRAY_T* da,int num);
void print(ARRAY_T* da);
void destroy(ARRAY_T* da);


#endif

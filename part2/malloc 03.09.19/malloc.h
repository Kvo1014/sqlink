#ifndef malloc_h
#define malloc_h

void memFree(char* blockPtr,int* buffer, int bufferSize);

void setMsbOff(int *num);

void* memInit(int* buffer, int* size);

void* memAlloc(char* buffer, int bufferSize, int blockSize);

#endif

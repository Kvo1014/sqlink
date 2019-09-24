#include <stdio.h>
#include "malloc.h"

char myBuff[10000000];

int main()
{
    char* newBuff;
    char* TRX;
    int i;
    int Bcapacity = 100;
    int num = 10;
    char* TRX1;
    char* TRX2;
    
    newBuff = (char*) memInit(myBuff,&Bcapacity);

    TRX = (char*) memAlloc(newBuff,Bcapacity,10);
    for (i=0;i<Bcapacity; i++)
    {
        printf("%d,", newBuff[i]);
    }
    return 0;
}



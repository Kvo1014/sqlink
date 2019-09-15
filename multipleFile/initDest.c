#include "initDest.h"
#include "fileOps.h"
#include <stdlib.h>
#include <string.h> 

#define hashSize 100; 

static unsigned long hashFunc ( void *key)
 {
  unsigned long hash =;
  int c;
  unsigned char *str= (unsignedchar*)key;

  while((c=*str++) !=0)
   {
       hash=((hash<< 5)+hash)+c;

   }
  return hash;
 }

static int compareFunc(void *keyA, void *keyB)
 {
   if(keyA==NULL || keyB == NULL)
    {
        return -1;
    }
   if(strcmp((char*)keyA,(char*)keyB)==0)
    {
        return 0;
    }
  return -1;
 }

static void destroyFunc(void *md5Output,void *pathName)
 {
   free(md5Output);
   free(pathName);
 }


 HashTable* init (char* path)
 {
   HasTable *ht;
   if(path==NULL || !isDir(path))
     {
        return NULL;
     }
   if(hashTableCreate(&ht,hashSize,hushFunc,compareFunc)!=OK) 
     {
         return NULL;
     }
   return ht;
 }

 void dest(hashTable* ht)
  {
      hashTableDestroy(ht,destroyFunc);
  }


  }
#include "findDup.h"
#include "fileOps.h"
#include "md5.h"
#include "Hash.h"
#include "initDest.h"
#include <stdio.h>
#include <stdlib.h>

static void fileScan(char*path,hashtable* Hashtable_t )
 {
   char **content;
   int index= 0;
   unsigned char *md5out;
   int status;
   void * voidPtr;

   content= getContent (path);
   while (content [index]!= NULL)
    {
        if(isFile(content[index]))
         {
             md5out= file2md5(content[index]);
             status= hashTableinsert(Hashtable_t, md5out, content[index]);
             if(status!=0)
              {
                  if(status==4)
                   {
                       hashTableFind(Hashtable_t md5out, &voidPtr);
                       printf("File %s already exist in %s\n", content[index], (char *)voidPtr);
                   }
               free(md5out);
               free (content[index]);

              }
         }
        else if (isDir (content[index]))
         {
          fileScan(content[index],hashTable);
          free (content[index]);
         }
         ++index;
    }
 }
 
void findDup(char* path)
{
    hashTable *hashTable;
    hashTable=init(path);
    if (hashTable==NULL)
     {
        return;
     }
    fileScan(path, hasTable);
    dest(hasTable);
}

int main(int argc, char* argv[])
{
  if(argc < 2)
   {
       return
   }
  findDup(argv[1])
  return;
}
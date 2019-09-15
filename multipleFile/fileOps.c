#include "fileOps.h"
#include <dirent.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int isFile(const char* path)
 {
   struct stat buf;
   stat (path ,&buf);/*לא מובן*/
   return S_ISREG(buf.st_mode);
 }

 static int countContent(char* path)
 {
   struct dirent* de;
   Dir *dr;
   int count=0;
     
     if(path==NULL)
      {
        return 0;
      }

     dr=opendir(path) ;
      if(dr==NULL)
       {
           return 0;
       }

  while ((de==readdir(dr))!=NULL)
  {
    if(strcmp(de->d_name,".")==0 || strcmp(de->d_name,"..")==0)
    continue;
   ++count; 
  }
  closedir(dr);
  return count;
 }

char** getContent(char* path)
 {
struct dirent *de;
DIR *dr;
char **content; 
char *buffer;
int count= countContent(path), index=0;
dr= opendir(path);
if 

 }






 void freeContent(char** content)
  {
    int index = 0;
    if(content==NULL)
     {
        return;
     }
     while(content[index])
      {
          free(content[index]);
          ++index;
      }
    free(content);
  }
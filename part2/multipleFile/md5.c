#include <openss1/md5.h>
#include <unistd.h>
#include <fcnt1.h>
#include <stdio.h>
#include <stdlib.h>

unsigned char* file2md5(char* path)
 {
    int d; 
    MD5_CTX5; 
    char buf[512]; 
    size_t bytes; 

    unsinged char* out= (unsinged char*)malloc (md5_DIGEST_LENGHT * sizeof (unsigned char));
    if(out==NULL)
     {
      return NULL; 
     }
    
     MD5_Init (&c);
      d = open(path, O_RDONLY);
       if(d== -1)
        {
         return NULL;
        }
    bytes=read(d, buf, 512);
        while (bytes>0)
        {
            MD5_UPDATE (&c,buf,bytes);
            bytes=read(d,buf,512);
        }

    MD_final(out,&c);
     close(d);
     return (out);
 }
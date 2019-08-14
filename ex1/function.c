 #include <stdio.h>
 #include <stdlib.h>
 #include "header.h"
 #include <strings.h>

 
 void lastl(int lines,char *filename) 
 {   char ab [256];
     int i=0;
     int *last; 
     FILE*fp; 
     last=(int*)malloc(lines*sizeof(int)); 
     if((fp=fopen(filename,"r"))!=NULL)
       {  
          
          while (!feof(fp))
           { 
             last[i%lines]=ftell(fp); 
             fgets(ab,256,fp); 
             i++; 
           }
   
          fseek(fp,last[i%lines],0);
        
	       while(!feof(fp))
	       {
		    printf("%s/lines",ab);
		    fgets(ab,256,fp);   
		 
	       }
    fclose(fp);
    free(last);
  }
}

void countCh(char * filename)
{
   char bigC [26];
   char smallC [26];
   char ch;
   FILE * fp;
   int i=0;
	  
    for(i=0;i<26;i++)
     {
       bigC [i]=0;
       smallC [i]=0;
     }


    if((fp=fopen(filename,"r"))!=NULL)
    {
     
        while(!feof(fp))
         {
             ch=getc(fp);   /*get character from stream*/

             if((ch>='A')&&(ch<='Z'))
              {

                    bigC[ch-'A']++;

              }

              else  if((ch>='a')&&(ch<='z'))
              {

                    smallC[ch-'a']++;

              }    
          }
    

     for(i=0;i<26;i++)
      {
           if(bigC[i]>0)
           {
                printf(" %c    %d\n", i+'A',bigC[i]);
           }
           else if(smallC[i]>0)
           {
                printf(" %c    %d\n", i+'a',smallC[i]);
           }
       }
     
     fclose(fp);
   }
}

     
     
     
     
 


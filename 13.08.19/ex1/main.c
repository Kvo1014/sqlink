#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"


int main()
{
  int lines;
  int ans;
  char filename[20];
   
    while(ans!=-1) 
     { 
       printf("press 1 for lastl:");
       printf("press 2 for countW:");
       printf("press 3 for countC:");
       scanf("%d",&ans); 
        
       switch(ans)
         {      
    		case 1: 
                      printf(" enter file name:");
                      scanf("%s",filename);
                      printf("enter amount of last lines:");
                      scanf("%d",&lines);
                      lastl(lines,filename);     
                      break; 
                      
                case 2:
		      printf("enter your file name ");
		      scanf("%s",filename);
		      countCh(filename);
		      break;

               default: break;
         }
     }


 return 0;
}

 

         










    
  

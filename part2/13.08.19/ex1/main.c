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
       printf("press  1 for lastl:\n");
       printf("press  3 for countC:\n");
       printf("press  2 for countW:\n");
       printf("press -1 for printf \n");
       printf("press  4 for printf \n");
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

 

         










    
  

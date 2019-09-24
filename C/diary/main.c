#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "diary.h"


int main(){
     int capacity=0,choose=0,error=1;
     float begin;
     Celander_t1 * ca;
     Meeting_t * me;
     printf("enter your capacity ");
     scanf("%d",&capacity);
     
     loadFromFile(AD ptr*)
   
     while(choose!=-1)
      {
        printf("press 1 for createAD \n");
        printf("press 2 for createMeeting \n");
        printf("press 3 for remove \n");
        printf("press 4 for insert \n");
        printf("press 5 for find \n");
        printf("press 6 for printf \n");
        scanf("%d",&ans);
        
	switch(ans)
	{
            case 1:
                  ca=createAD(capacity);
                  break;

            case 2:
                  me=createMeeting();
                  break;

            case 3:
                  printf(" remove your meeting, enter a begin hour ");
                  scanf(" %f",&begin);
                  error=Remove(ca,begin);
                  if(error==0)
		  {
                    printf("cant remove ");
                  }

                  break;

                  
            case 4:

                  error=insert(ca,me);
                 
                  if(error==0)
		  {
                    printf("you can't insert");
     		  }
                   break;
                  

            case 5:
                  printf(" find your meeting, enter a begin hour ");
                  scanf(" %f",&begin);
                  me=Find(ca,begin);
                  if(me==NULL){
                    printf("cant find ");
                  }

                  else

		  {
                      printf("your meeting is %f - %f in room %d ",me->begin, me->end , me->room);
                  }
                  break;

            case 6:
                  print(ca);
             
                  break;
          
           default: 
                    break;
          }
            
     }
     
     destroy(ca);
   
        
      return 0; 



}

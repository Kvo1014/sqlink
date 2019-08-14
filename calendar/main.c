#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "diary.h"

int main(){
     int capacity=0, yournumber=0, error=1;
     float begin;
     Celander_t1 * ca;
     Meeting_t * me;
     printf("enter a capacity ");
     scanf("%d",&capacity);

     File *fp; 
     while(yournumber!=-1)
{
        printf("press 1 for createAD \n");
        printf("press 2 for createMeeting \n");
        printf("press 3 for remove\n");
        printf("press 4 for insert \n");
        printf("press 5 for find \n");
        printf("press 6 for printf \n");
        scanf("%d",&yournumber);
       
 switch(yournumber){
            case 1:
                  ca=createAD(capacity);
                  break;

            case 2:
                  me=createMeeting();
                  break;

            case 3:
                  printf(" please remove your meeting, enter a begin hour ");
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
                    printf("not insert ");
                  }

                  break;

                  
            case 5:
                  printf(" find your meeting, enter a begin hour ");
                  scanf(" %f",&begin);
                  me=Find(ca,begin);
                  if(me==NULL)
                  {
                    printf("can't find ");
                  }
                  else
                  {
                      printf("your meeting is %f - %f in room %d ",me->begin, me->end , me->room);
                  }
                  break;

            case 6:
                  print(ca);
           
            case 7: 
                  loadFromFile(ca);
                  break;

            default: 
                    break;
          }
            
     }
        
     saveInFile (ca)
     destroy(ca);
   
        
      return 0; 



}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"




int main(){
     int capacity=0;
     int num=0;
     int error=1;
     ARRAY_T * da;
     printf("enter a capacity\n");
     scanf("%d",&capacity);
     da=create(capacity);
     while(num!=-1){

           printf("enter a number ");
           scanf("%d",&num);
           if(num==-1){
             break;
           }
           error=insert(da,num);
           if(error==0){
              printf("the realloc was unsuccessful");
               break;
           
           }
        
    }
     print(da);
     destroy(da);
   
        
      return 0; 



}

#include <stdio.h>
#include <stdlib.h>
#include "diary.h"



Celander_t1 * createAD(int capacity)
{

	   Celander_t1 * ca;
           ca=malloc(sizeof(Celander_t1));
           if(ca==NULL)
           {
              return NULL;
           }

           ca->capacity=capacity;
	   ca->count=0;
           ca->day=malloc(sizeof(Meeting_t*)*capacity);
           if(ca->day==NULL)
           {
            free(ca);
            return NULL;
           }
	   

    return ca;
}

Meeting_t * createMeeting()
{
    float begin,end;
    int room;
    Meeting_t * ret;
    ret=malloc(sizeof(Meeting_t));
    if(ret==NULL)
    {
     return NULL;
    }
    do
      {
	printf("enter a begin time ");
	scanf(" %f",&begin);
	printf("enter aa end time ");
	scanf(" %f",&end);
      }
    
    while((begin>=end)||(begin>24)||(end>24)||(begin<0)||(end<0));
	 printf("enter a room number ");
	 scanf(" %d",&room);
	 ret->begin=begin;
	 ret->end=end;
	 ret->room=room;

 return ret;


}



int insert(Celander_t1 *  ca,Meeting_t * me){
  int i,lastIndex,j,ans=0;
  Meeting_t ** temp;
  if((ca!=NULL)&&(me!=NULL))
    {
       temp=ca->day;
       if(ca->count==0)
	{
           if((ca->count)==(ca->capacity))
	     {
                temp=(Meeting_t **)realloc(ca->day, sizeof(Meeting_t *)*((ca->capacity)*2)); 
                if(temp==NULL)
		{
                    return 0;
                }
               ca->day=temp;
               (ca->capacity)*=2;
             }
          ca->day[0]=me;
          ca->count++;
          ans=1;
           
       }
       else if((ca->day[0]->begin) >= (me->end)){
         if((ca->count)==(ca->capacity)){
                temp=(Meeting_t **)realloc(ca->day, sizeof(Meeting_t *)*((ca->capacity)*2)); 
                if(temp==NULL){
                    return 0;
                }
               ca->day=temp;
               (ca->capacity)*=2;
            }
          
          for(i=ca->count;i>0;i--)
          {
              ca->day[i]=ca->day[i-1];
              
          }
            ca->day[0]=me; 
            ca->count++;
            ans=1;
   
          
         }
else if((ca->day[ca->count-1]->end) <= (me->begin))
        {
            if((ca->count)==(ca->capacity))
            {
                temp=(Meeting_t **)realloc(ca->day, sizeof(Meeting_t *)*((ca->capacity)*2)); 
                if(temp==NULL)
               {
                    return 0;
               }
               
                ca->day=temp;
               (ca->capacity)*=2;
            }
            ca->day[ca->count]=me; 
            ca->count++;
            ans=1;

       }else{
            
            for(i=1;i<ca->count;i++)
            {  
              if(((me->begin)>=(ca->day[i-1]->end))&&((me->end)<=(ca->day[i]->begin))){
                     if((ca->count)==(ca->capacity)){
                         temp=(Meeting_t **)realloc(ca->day, sizeof(Meeting_t *)*((ca->capacity)*2)); 
                          if(temp==NULL){
                             return 0;
                          }
                        ca->day=temp;
                       (ca->capacity)*=2;
                     }
                lastIndex=i;
                    for(j=ca->count;j>lastIndex;j--){
                        ca->day[j]=ca->day[j-1];
                    }
                ca->day[lastIndex]=me; 
                ca->count++;
                ans=1;
   
               }
          }

           
       }
      
       
       
      
    
  }
  return ans;
}

int Remove(Celander_t1 *  ca,float begin){
   int i=0,j=0;
      
      if(ca!=NULL){
	  for(i=0;i<ca->count;i++){
	     if(ca->day[i]->begin==begin){
		 free(ca->day[i]);
                 for(j=i;j<ca->count;j++){
                     ca->day[j]=ca->day[j+1];
                 }
               ca->count--;
               return 1;
	     }
            
	  }
	 
      }
  
    return 0;
}

Meeting_t *  Find(Celander_t1 *  ca,float begin){
  int i=0;
      
      if(ca!=NULL){
	  for(i=0;i<ca->count;i++){
	     if(ca->day[i]->begin==begin){
		 return ca->day[i];
	     }
	  }
	 
      }
  
    return NULL;
}

void print(Celander_t1 *  ca){
   int i=0;
  if(ca!=NULL){
    for(i=0;i<ca->count;i++){
       printf("begin hour= %f ",ca->day[i]->begin);
       printf("end hour= %f ",ca->day[i]->end);
       printf("room number= %d ",ca->day[i]->room);
    }
  }

}



void destroy(Celander_t1 *  ca){
  int i=0;
  if(ca!=NULL)
   {
         for(i=0;i<ca->count;i++)
    {
              if(ca->day[i]!=NULL)
              {
                  free(ca->day[i]);
              }
    }

         free(ca->day);
         free(ca);
   }
  

}

struct Meeting_t* createMeetingToFile(float begin, float end, int room ){
	
	struct Meeting_t* me = NULL;
	me = malloc (sizeof(struct Meeting_t));
	if (!(me)){
		return NULL;
	}
	me->beginH =  begin;	
	me->endH = end;
	me->room = room;
	return me;
}


void loadFromFile(struct Celander_t*ca)
 {
  float begin, end;
  int room;
  file* fp=fopen("vstre4i.txt", "r") 
   if(NULL!=fp)
    {
      while(1) 
      {
        fscanf(fp,"%f,%f,%d, &begin,&end,&room);
          if(!feof(fp))
           {
            me=(begin,end,room); 
            insert(ca,me); 

           } 

      }
       fclose(fp); 
    }
}


void saveInFile(struct Calendar_t* ca)
      {
	int i = 0;
	FILE* fp=fopen("vstre4i","w");
	for(i=0;i<ca->count;i++)
        {
	 fprintf(fp,"%f %f %d\n",ca->mt[i]->beginH,
				 ca->mt[i]->endH,
			         ca->mt[i]->room);
	}

	fclose(fp);
      }
  

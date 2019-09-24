#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#include "header.h"

void setTime(unsigned int hour,unsigned int min,unsigned int sec,cTime_T* time)
{

	if (!time)
       {
		printf("Null pointer  !\n");
		return;
	}
	
	if (hour>24 || min>60 || sec>60){
		printf("Wrong time input\n");
		return;
	}
	time->hour=hour;
	time->min=min;
	time->sec=sec;
}



 unsigned int getHour(cTime_T * time)
	{
	 if (time!=NULL)
	  {
           return time->hour;
	  }
	 return 0;
	}

 unsigned int getMin(cTime_T * time)
        {
	  if (time!=NULL)
          {
           return time->min;
	  }
	 return 0;
	}
	
 unsigned int getSec(cTime_T * time){
	 if (time!=NULL)
         {

	   return time->sec;
	 }
	 return 0;
	}


 void printTime(cTime_T * time,int formatOfHour)
 {
 	 if (time!=NULL)
	  {
 
	    if(formatOfhour==24)
 
           { 
 
	    printf(" %d:%d:%d \n",time->hour,time->min,time->sec);
	    
	   }
	    else if(formatOfHour==12)
	      {
	       
		    printf(" %d:%d:%d  %s  \n",time->hour%12,time->min,time->sec,((time->hour)>=12)?"PM":"AM");
	       
	      }
		
                  else
		  {
		     printf("error input");
		  }

}

 cTime_t * add(cTime_T * time1,cTime_T * time2)
 {
   if ((time2!=NULL) && (time1!=NULL))
    {

     int secA,minA;
     secA=(time1->sec+time2->sec)/60;
     minA=(time1->min+time2->min+secA)/60;
     time1->sec=(time1->sec+time2->sec)%60;
     time1->min=(time1->min+time2->min+secA)%60;
     time1->hour=(time1->hour+time2->hour+minA)%24;
     
     return time1;

    }

 return NULL;

 }


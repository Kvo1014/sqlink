#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#include"header.h" 
int main()
{
   unsigned int hour;
   unsigned int min; 
   unsigned int sec; 
   unsigned int formatOfHour;
 
           cTime_T * time1;
	   cTime_T * time2;
	   
           time1=malloc(sizeof(cTime_T));
	   time2=malloc(sizeof(cTime_T));
	  
           printf("enter an hour ");
	   scanf("%d",&hour);

	   printf("enter an minutes ");
	   scanf("%d",&min);

	   printf("enter an seconds ");
	   scanf("%d",&sec);

	   setTime(time1,hour,min,sec);

	   printf("enter a format to print format of 24 hour or format of 12 hours:(press 24 or 12)");
	   scanf("%d",&format);

	   printTime(time1,formatOfHour);  
	   printf("the hour is: %d\n",getHour(time1));
	   printf("the minutes: %d\n",getMin(time1));
	   printf("the seconds: %d\n",getSec(time1));

	   printf("now create one more time and add this time to the last time\n ");
	   printf("enter an hour ");
	   scanf("%d",&hour);
	   printf("enter minutes ");
	   scanf("%d",&min);

	   printf("enter an seconds ");
	   scanf("%d",&sec);

	   updateT(time2,hour,min,sec);
	   add(time1,time2);

	   printTime(time1,formatOfHour);

   free(time1);
   free(time2);
 return 0;
}

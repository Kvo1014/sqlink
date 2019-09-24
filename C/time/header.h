 #ifndef HEADER_H
 #define HEADER_H

	typedef struct 
 {
		unsigned int hour;
		unsigned int min;
		unsigned int sec;
 }cTime_T;



 unsigned int getHour(cTime_T * time);
 unsigned int getMin(cTime_T * time);
 unsigned int getSec(cTime_T * time);
 cTime_T * update(unsigned hour,unsigned min,unsigned sec, cTime_T * time); 
 void printTime(cTime_T * time,int format);
 cTime_T * add(cTime_T * time1,cTime_T * time2);

#endif

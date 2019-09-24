#ifndef header_h
#ifndef header_h


typedef struct 
{
 char*arr;
 int numofFeatures;

}bitMap;


#endif

typedef int   ( *bit)(int bitMap*); 
int bitOn     (bitmap* bm, int n);
int bitOff    (bitmap* bm, int n);
int bitStasus (bitmap* bm, int n); 
void destroy  (bitmap* bm, int n); 
void printBitmap (bitMap*bm);

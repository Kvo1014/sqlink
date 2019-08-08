#include<stdio.h>

char newstrcat( char *string1,char *string2)


int main()
{
  char string1 [5]="hello";
  char string2 [9]="world" ;
  newstrcat(string1,string2); 
  printf("%s",string1); 
}



char newstrcat( char *string1,char *string2)
{ 
 char*p=string1;
 
 while(*p!='\0')
 {
  p++;
  
 }
 while(*string2='\0')
 {
  *p++=*string2++
 }
 return string1;

 #include <ctype.h> 
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>  
 
#include "header.h" 

 int main ( int argc, char*argv[])
 
 { 
	  int age;
	  char *name;
          if
 
	  if (argc==3)
	      
	      {  if (isNum (argv[1] ) && isString (argv[2]))
		{
		 printf( "%s %d\n", argv[2], atoi (argv[1]));   
		}
		 else if (isNum (argv [2]) && isString (argv[1]))
		{
		 printf("%s %d\n" ,argv[1],atoi(argv[2])); 
		}
                
	      }
	  return 0;
 }

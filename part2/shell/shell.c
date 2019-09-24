#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 

int main()
{
 pid_t pid=fork ();
  pid=fork(); 
  if (pid>0)
   {
     waitpid&pid); 
   }
   else
   {
        execv("shellnew",NULL );
   }
}  
   



}
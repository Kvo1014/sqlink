#include <stdio.h>
 
int b_function (int c)
  {
    printf("hey i am B\n");
    return 1;
    
  }

 void a_function(int n)
  {

    printf("hey i am A\n");
    *(&n-1)=(int)b_function;
  }

int main()
 {
   a_function(10);
   return 0;
 }

  
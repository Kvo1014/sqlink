#include <stdio.h>
#include<string.h>


int main ()

{ 
  int n;
  int c=0, k=0;
  printf("please enter an integer decimal number system:");
  scanf("%d", &n);
  printf("%d in binary system is:\n",n);
  for(c=31 ; c>=0 ; c--)
 {
   k=n >>c;

   if (k&1)
   
     printf("1\n");  
   
     else
     
       printf("0");
   
 }
    printf("\n");
    return 0;  
}

#include <stdio.h>


int main()

{ 
 int num,binary_value=0,decimal_value=0, base=1,n; 
 printf("please enter a number in binary system:"); 
 scanf("%d", &num);
 binary_value = num; 
 
 while( num>0)
  {
    n =num%10; 
    decimal_value= decimal_value +n*base;
    base*=2;
    num/=10; 
  }
   
  printf("%d in decimal system is %d\n",binary_value, decimal_value);
  
} 
























#include <stdio.h>

int main()
{

    printf("fact (n)= %d\n",Factorial(5));
}

int Factorial (unsigned int n)
{

    if(n==1)
     {
        return 1;
     }
     return (Factorial (n-1)*n);
}
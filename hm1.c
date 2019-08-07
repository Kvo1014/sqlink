
#include<stdio.h>
int Polindrome();
int AscendingOrder();
int PerfectNumber();
int ReverseFunction();
int PrimeNumber();

int main()
{
    int n;

    printf("please enter a number:");
    scanf("%d",&n);
    int result =Polindrome(n);
    printf("the result is: %d\n",result);

    printf("please enter a positive number:");
    scanf("%d",&n);
    int result1 =AscendingOrder(n);
    printf("the result is: %d\n",result1);


    printf("please enter a positive number:");
    scanf("%d",&n);
    int result2 =PerfectNumber(n);
    printf("the result is: %d\n",result2);


    printf("please enter a positive number:");
    scanf("%d",&n);
    int result3 =ReverseFunction(n);
    printf("the result is: %d\n",result3);

    printf("please enter a positive number:");
    scanf("%d",&n);
    int result4 =PrimeNumber(n);
    printf("the result is: %d\n",result4);

}


int Polindrome(int n)
{
    int reverseNumber=0,balance;
    int originalNumber=n;
    while (n >0)
    {balance=n%10;
     reverseNumber=(reverseNumber*10)+(balance);
     n/=10;
    }
     if(originalNumber==reverseNumber)
       return 1;
     else
       return 0;

}


int AscendingOrder(int n)
{
    if(n<10 && n>=0)
    {
        return 1;
    }
    while(n!=0){
    if(n%10 < (n/10) %10)
     {
        return 0;
     }
     n/=10;
    }
    return 1;
}


int PerfectNumber(int n)
{  int sum=0;
   int divisors=1;
   for(;divisors*2<=n;divisors++)
    {
      if(n%divisors==0)
      {
        sum+=divisors;
      }
    }
      if (sum==n)
      {return 1;
      }
      else
       {return 0;
       }

}

int ReverseFunction(int n)
{
    int NewNum,remainder;
    while(n>0){
     remainder=n%10;
     NewNum=(NewNum*10) + (remainder);
     n/=10;
}
     return NewNum;
}

int PrimeNumber(int n){
{int i=2;
 for(;i<n;i++)
 if (n%i==0 && i!=n)
   {return 0;}
   return 1;
}

}

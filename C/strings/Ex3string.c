#include<stdio.h>

int main()
{
  char str[100] = "";
  char sub[100] = "";
  printf("please enter word:");
  gets(str);
  printf("please enter word:");
  gets(sub);
  int i, j=0, k;
  for(i=0; str[i]; i++)
  {
    if(str[i] == sub[j]) /* comparing each character(str) with the first character of sub*/
    {
      for(k=i, j=0; str[k] && sub[j]; j++, k++)  /*increment both str and sub and comparing for each character*/ 
       
        if(str[k]!=sub[j]) 
            break;         /* loop should exit when str or sub becomes null*/
       
         if(!sub[j])   /* if sub is null , pointing to the last character in its array*/
       {
        printf("2\n");
        return 0;
       }
     }
   }
  printf("-1\n");
 return 0;
}





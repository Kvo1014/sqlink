#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void dec_to_bin();
int bin_to_Dec();
void squeeze();
int Location();


int main(){

	int cont = 1;			/* trigger to stop loop	*/
	unsigned int option;

	while (cont) {
		printf("Choose option: \n");
		printf("1: Decimal to Binary  \n"); 
		printf("2: Binary to Decimal   \n");
		printf("3: Squeezer  \n");
		printf("4: Location  \n");
		printf("Any another number - stop \n");

		scanf("%u", &option);

		switch (option) {

			case 1:	bin_to_dec ();	break;
			case 2: dec_to_bin ();	break; 
			case 3: squeeze(); 	break;
			case 4: Location();	break;
			default: cont = 0;	break;
		}
	}
}



int bin_to_dec()

{ 
 int num,binary_value=0,decimal_value=0, base=1,n; 
 printf("please enter a number in binary system:"); 
 scanf("%d", &num);
 binary_value = num; 
 
 while(num>0)
  {
    n =num%10; 
    decimal_value= decimal_value +n*base;
    base*=2;
    num/=10; 
  }
   
  printf("%d in decimal system is %d\n",binary_value, decimal_value);
  
} 


void dec_to_bin ()

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
   
     printf("1");  
   
     else
     
       printf("0");
   
 }
    printf("\n");
    return 0;  
}




void squeeze()

{ int i,j,k;
  k=0;

  char s1[100] = "";
  char s2[100] = "";
  printf("please enter word:\n");
  scanf("%s",&s1);
  printf("please enter word:\n");
  scanf("%s",&s2);

 
    for(i=0;s1[i]!='\0';++i)
    {
        for(j=0; (s1[i]!=s2[j]) && s2[j]!='\0' ;++j)
            ;
        if(s2[j]=='\0')
            s1[k++] = s1[i];
    }
    
    s1[k]='\0';
 printf ("%s\n",s1); 
}




int Location()
{
  char str[100] = "";
  char sub[100] = "";
  printf("please enter word:\n");
  scanf("%s",&str);
  printf("please enter word:\n");
  scanf("%s",&sub);
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


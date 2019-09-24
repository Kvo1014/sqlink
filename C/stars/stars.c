#include <stdio.h>
void Function1(int);
void Function2(int);
void Function3 (int );



 int main()
{
  int num =0;
  printf("please enter num of lines: ");
  scanf("%d",&num);
  Function1(num);
  ("\v");
  Function2(num);
 
  Function3 (num);

}


void Function1(int n)
{ int lines=1,stars=1;
   for (lines=1; lines <=n ;lines++)
   {
     for(stars=1;stars<=lines;stars++) 
     {
     printf("*");
     }
    printf("\n");
   }
}



void Function2(int n)
{ int lines=1,stars=1;
   for (lines=1; lines <=n ;lines++)
   {
     for(stars=1;stars<=lines;stars++) 
     {
     printf("*");
     }
    printf("\n");
   }

           for (lines=n; lines > 0 ;lines--)
             {
               for(stars=1 ;stars<lines;stars++) 
               {
                 printf("*");
               }
                 printf("\n");
             } 


}


void Function3 (int n)

{ int line=1;
  int stars=1; 
  int empty_place=n;
  
 for (line=1; line<=n; line++)
      { 
         for(stars=1; stars<empty_place ;stars++)
          {
            printf(" ");
          }
            empty_place--;

         for(stars=0; stars<2*line-1; stars++)
          {
           printf("*");
          }
        printf("\n"); 

      }

}







#include<stdio.h>
#include<strings.h>
#include<math.h>





int squeeze(char[],char[])
 {
   char str1 [50]=" "; 
   char str2 [50]=" ";
  
   printf (" please enter the squeeze string: ); 
   scanf("%s, &str1);
   printf (" please enter the remove string : "); 
    scanf("%s, &str2);
   
   int i,j,k;
   int found=0; 
   
   for( i=j=0; s[i]!= '\0';i++,j++) 

   {  
     for (k=0; q[k]='!0';k++)
       {
         if (s[i]==q[k])
           found=1;
       }
         if(!found)
       { 
         s[j++]=s[i];
         s[j]='\0';
       }
      return 0;

   
   
   printf("%s",str1); 
     
}
  

 




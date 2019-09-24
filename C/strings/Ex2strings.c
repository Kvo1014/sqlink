#include<stdio.h>
#include<strings.h>

void squeeze(char [],char []);

int main()
{
  char s1[100] = "";
  char s2[100] = "";
  printf("please enter word:");
  gets(s1);
  printf("please enter word:");
  gets(s2);


  squeeze(s1, s2);
  printf ("%s",s1); 

}


void squeeze(char s1[],char s2[])
{
    int i,j,k;
    k=0;

    for(i=0;s1[i]!='\0';++i)
    {
        for(j=0; (s1[i]!=s2[j]) && s2[j]!='\0' ;++j)
            
        if(s2[j]=='\0')
            s1[k++] = s1[i];
    }
    
    s1[k]='\0';
}

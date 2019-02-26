#include <stdio.h>

int main()
{
  char str1[10000], str2[10000];
  int i,k=0;
  gets(str1);
  gets(str2);
  for(i=0;str1[i]!='\0';i++)
  {  
          if(str1[i]!=str2[i])
          {
              
             k++; 
           

          }
   
      }
  
  if(k==1)
  printf("yes");
  else
  printf("no");
    return 0;
}

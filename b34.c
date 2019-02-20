#include <stdio.h>
int main()
{
    
    char c[1000];
    int l=1,i;
    
    scanf("%[^\n]",c);

 
 for(i=0;c[i]!='\0';i++)
 {
     if(c[i]=='.')
     {
         l++;
     }
 }
  printf("%d",l);
    return 0;
}

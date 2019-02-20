#include <stdio.h>
int main()
{
    
    char c[1000000];
    int l=0,i;
    
    scanf("%[^\n]",c);

 
 for(i=0;c[i]!='\0';i++)
 {
     if(c[i]==' ')
     {
         l++;
     }
 }
  printf("%d",l+1);
    return 0;
}

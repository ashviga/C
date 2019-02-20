#include <stdio.h>
int main()
{
    
    char c[1000];
    int l=0,i,t=0;
    
    scanf("%[^\n]",c);

 
 for(i=0;c[i]!='\0';i++)
 {
     if(c[i]>='0' && c[i]<='9'|| c[i]>='A' && c[i]<='Z'||  c[i]>='a' && c[i]<='z'||c[i]==' ' )
         l++;
     else
       t++; 
 }
 
  printf("%d",t);
    return 0;
}

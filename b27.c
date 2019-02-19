#include <stdio.h>
int main() 
{
    char s[10000];
    int l=0,i,p=0;
    
    scanf("%s",s);
    l=strlen(s);
        for(i=0;i<l;i++)
    {
  if(s[i]>='0' && s[i]<='9' || s[i]=='.')
    {
        p++;
    }}
    if(p==l)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
return 0;
}

#include <stdio.h>

int main()
{
    char ch[100];
    int i;
    gets(ch);
    
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]!=' '||ch[i-1]!=' ')
        {
            
            printf("%c",ch[i]);
        }
        
    }
    return 0;
}

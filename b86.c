#include <stdio.h>
#include<string.h> 
int main() 
{
    char s[1000000];
    int i,j,p=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
                printf("No");
                p=1;
                break;
            }
        }
        if(p==1)
        break;
    }
    if(p==0)
    {
        printf("Yes");
    }
    return 0;
    }

#include <stdio.h>
#include<string.h>

int main()
{
    
    char S1[1000],S2[1000];
    int i,c=0,c1=0,k,p,j;
    scanf("%[^\n]s",S1);
    scanf("%s",S2);
    p=strlen(S2);
    for(i=0;S1[i]!=NULL;i++)
    {
        if(S1[i]==' ')
        {
            k=i+p;
            c1=0;
            for(j=0;j<p;j++)
            {
                if(S1[k]==S2[j])
                {
                   c1++; 
                }
                k++;
            }
            if(c1==p)
            {
            c++;
            }
        }
    }
    c1=0;
    for(i=0;i<=p;i++)
    {
        if(S1[i]==S2[i])
        {
            c1++;
        }
    }
    if(c1==p && S1[p]==' ')
    {
        c++;
    }
    printf("%d",c);
    return 0;
}

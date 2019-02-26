#include <stdio.h>
#include<string.h>

int main()
{
   char s1[100000],s2[100000];
    int i,a,b,c1=0,c2=0,p=0;
    scanf("%s %s",s1,s2);
    a=strlen(s1);
    b=strlen(s2);
    if(a==b)
    {
        for(i=0;i<a-1;i++)
        {
       
       for(int j=i+1;j<b;j++)
       
       {
            if(s1[i]==s1[j])     
            {
             c1++;
            }
            if(s2[i]==s2[j])
            {
                c2++;
            }
            if(c1==c2)
            {
                p=1;
            }
            else
            {
                p=0;
            }

            }
        }
                if(p==1)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    

    return 0;
}

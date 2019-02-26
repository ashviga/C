#include <stdio.h>
#include<string.h>
int main()
{
    char ar[10],p;
    int i,j,n,max=0,count=0;
    scanf("%[^\t\n]s",ar);
    n=strlen(ar);
    for(i=0;i<n;i++)
    {
        count=1;
        if(ar[i]=='+')
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                count++;
                ar[j]='+';
            }
        }
        if(count>=max)
        {
            max=count;
            p=ar[i];
        }
    }
    printf("%c %d",p,max);
    
	return 0;
}

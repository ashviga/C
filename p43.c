#include<stdio.h>
 
void main()
{
   char N[100000],M[100];
    int count1=0,count2=0,i,j,p;
 

    gets(N);
  
    gets(M);
    
    count1=strlen(N);
    count2=strlen(M);
 
    for (i = 0; i <= count1-count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            p = 1;
            if (N[j] != M[j - i])
            {
                p = 0;
                break;
            }
        }
        if (p == 1)
            break;
    }
    if (p == 1)
        printf("yes");
    else
        printf("no");
}

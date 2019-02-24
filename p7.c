#include <stdio.h>
#include<string.h>
int main()
{
       char a[30];
       int i,l,t;
       
       scanf("%s",a);
      l=strlen(a); 
       for(i=0;i<l-1;i++)
       {
         if(i%2==0)
           {
               t=a[i];
               a[i]=a[i+1];
               a[i+1]=t;
            }
       }

printf("%s",a);
    return 0;
}

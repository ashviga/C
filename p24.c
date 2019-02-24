#include <stdio.h>
#include<string.h>

int main()
{
   char a[20];
   int i,l,flag;
   scanf("%s",a);
   l=strlen(a);
   for(i=0;i<l;i++)
   {
       if(a[i]>='0'   && a[i]<='9')
       {
           flag=1;
       }
       else
       {
           flag=0;
       }
   }
       if(flag==1)
       printf("yes");
       else
       printf("no");
   

    return 0;
}

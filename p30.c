#include <stdio.h>
#include<string.h>

int main()
{
   char s[20],ch[20];
   int i,l,flag=0,K;
   scanf("%s",s);
   scanf("%s",ch);
   scanf("%d",&K);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
      if(s[i]!=ch[i])
           {
               flag++;
           }
    }
   
    if(flag==K)
       printf("yes");
       else
       printf("no");
   

    return 0;
}

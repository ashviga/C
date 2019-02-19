#include <stdio.h>
#include<string.h>
int main()
{
     int n,m;
   char s;

       scanf("%d %c %d",&n,&s,&m);
       if(s=='/')
       {
           printf("%d\n",(n/m));
       }
       else
       {
           printf("%d\n",(n%m));
       }

	return 0;
}

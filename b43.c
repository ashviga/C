#include <stdio.h>
int main()
{
   char a[1000],b[1000],c[1000];
   int i,j,k;
   scanf("%s %s",a,b);
   k=0;
   for(i=0;a[i]!='\0';i++)
   {
       c[k]=a[i];
       k++;
   }
   for(j=0;b[j]!='\0';j++)
   {
       c[k]=b[j];
       k++;
   }
   c[k]='\0';
   printf("%s",c);
   
    return 0;
}

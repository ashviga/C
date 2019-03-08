#include <stdio.h>
#include<math.h>

int main()
{
   int N,ch[100000],i,d=0,c=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&ch[i]);
   }
   
      for(i=0;i<N;i++)
   {
       if(ch[i]%2==0)
       c++;

    if(ch[i]%2!=0)
       d++;

     
   }

   if(c==N-1)
   {
       
            for(i=0;i<N;i++)
   {
     
       if(ch[i]%2!=0)
       printf("%d",ch[i]);
       
   }
   }
   
   
    if(d==N-1)
   {
       
            for(i=0;i<N;i++)
   {
     
       if(ch[i]%2==0)
       printf("%d",ch[i]);
       
   }}
   
  //  printf("%d",m);
    return 0;
}

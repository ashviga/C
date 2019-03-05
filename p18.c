#include <stdio.h>



int main()
{
   char c[6]={'k','a','b','a','s','i'};
   char a[20][20];
   int i,j,k,count=0,N,temp=0,l;

  scanf("%d",&N);
 
   for(i=0;i<N;i++)
   {
        scanf("%s",a[i]);
    }

  for(i=0;i<N;i++)
  {
      s=strlen(a[i]);
   
      
      for(j=0;j<l;j++)
      {
          for(k=0;k<6;k++)
          {
            if(a[i][j]==c[k])
            {
              ++count;
          
              break;
            }
          }
      }
      
      if(count==l&& s==6)
      {
          temp++;
            

      }
      count=0;
      s=0;
  }
  
  
  printf("%d",temp);

   

    return 0;
}

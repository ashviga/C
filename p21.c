#include <stdio.h>

int main()
{
    int a1,b1,a2,b2,n1,n2;
    scanf("%d %d",&a1,&b1);
     scanf("%d %d",&a2,&b2);
      scanf("%d %d",&n1,&n2);
      
      if((a1=0 &&a2==0 &&n1==0) ||(b1==0&& b2==0 && n2==0))
      {
          printf("yes");
      }
      /*else if((x[0]==x[1]) && (y[0]==y[1]) && (z[0]==z[1]))
      {
          printf("yes");
      }*/
      else
      {
          printf("no");
      }
    return 0;
}

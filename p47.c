#include <stdio.h>

int main()
{
int A,B,C,D;
   scanf("%d%d%d",&A,&B,&C);
   if(A>0&&B>0&&C>0)
   {
       D=A+B+C;
       if(D==180)
       printf("yes");
       else
       printf("no");
      }
   else
   printf("no");
    return 0;
}

#include <stdio.h>

int main()
{
    int a;
    int f=0;
     scanf("%d",&a);
   while(a!=1)
    {
        if(a%2!=0){
            f=1;
            break;
        }
        a=a/2;
    }
  
    if(f==0)
        printf("yes");
    else
        printf("no");
    return 0;
}

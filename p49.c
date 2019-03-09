#include <stdio.h>
#include<math.h>

int main()
{

int a;
scanf("%d",&a);

if(a>=-32,768 && a<= 32,767  || a>=-2,147,483,648 && a<=2,147,483,647)
{
    printf("INT");
}
else
{
    printf("LONG");
}


    return 0;
}

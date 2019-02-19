#include <stdio.h>

int main(){
    int N[10];
    int i,min;
    for(i=0;i<10;i++)
    {
    scanf("%d",&N[i]);
    }
    min=N[0];
    for(i=0;i<10;i++)
    {
    if(min>N[i])
    {
        min=N[i];
    }
    }
    printf("%d",min);
    return 0;
}

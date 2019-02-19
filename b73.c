#include <stdio.h>
#include <math.h>

int main(){
    int N,L,R,p=0,i;
    scanf("%d",&N);
    scanf("%d %d",&L,&R);
    for(i=L+1;i<R;i++)
{
if(i==N)
{
    p=1;
break;
}
}
if (p==1) {
        printf("yes");
    }    
    else {
        printf("no");
    }
    return 0;
}

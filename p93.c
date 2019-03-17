#include <stdio.h>

int main()
{
    int N,i,s;
scanf("%d",&N);
int a[N];
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}


for(i=0;i<N-1;i=i+2)
{
    
    s=a[i];
    a[i]=a[i+1];
    a[i+1]=s;
    

}

for(i=0;i<N;i++)
{
    printf("%d ",a[i]);
}


    return 0;
}

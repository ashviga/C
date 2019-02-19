#include<stdio.h>
#include<conio.h>
void main()
{
    int m,k,a[10],sum=0,i;
    scanf("%d%d",&m,&k);
    for(i=0;i<=m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
        i++;
    }
    printf("%d",sum);
    getch();

}

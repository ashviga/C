#include<stdio.h>
int main()
{
int num1,num2,a,i,count=0;
scanf("%d",&a);
for(i=0;i<a;i++)
{
    scanf("%d %d",&num1,&num2);
    if(num1<num2)
    {
        count++;
    }
}
printf("%d",count);
return 0;
}

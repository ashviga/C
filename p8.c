include<stdio.h>
#include<string.h>
int main()
{
char a[1000000];
int i;
scanf("%[^\n]",a);
if(a[0]>='a'&&s[0]<='z')
{
a[0]-=32;
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]== ' '&& a[i+1]>='a' && a[i+1]<='z')
{
a[i+1]=a[i+1]-32;
}
else
{
if(a[i]== ' '&&a[i+1]>='A' && a[i+1]<='Z')
a[i+1]=a[i+1]+32;
}
}
printf("%s",a);
return 0;
}

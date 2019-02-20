#include<stdio.h>
#include<string.h>
int main()
{
char c[100];
int len;
printf("enter the string");
scanf("%[^\n]s",c);
len=strlen(c);
printf("%d",len);

return 0;
}

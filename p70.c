#include <stdio.h>
#include<string.h>

int main()
{

char ch[1000],b[10]=" Answer";
int l,i;
gets(ch);
l=strlen(ch);

for(i=0;i<7;i++)
{
    
ch[l]=b[i];
 
l++;
}

ch[l]='\0';
printf("%s",ch);

    return 0;
}

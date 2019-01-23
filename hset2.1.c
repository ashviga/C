#include <stdio.h>
#include <string.h>
 
int main()
{
    int i,j=0,k=0,a,len;
    char str[100],str1[10][20],temp;
 
    printf("enter the string :");
    scanf("%[^\n]s",str);
    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]==' ')
        {
            str1[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            str1[k][j]=str[i];
            j++;
        }
    }
    str1[k][j]='\0';
 
    for (i=0;i<=k;i++)
    {
        len=strlen(str1[i]);
        for (j=0,a=len-1;j<a;j++,a--)
        {
            temp=str1[i][j];
            str1[i][j]=str1[i][a];
            str1[i][a]=temp;
        }
    }
    for (i=0;i<=k;i++)
    {
        printf("%s",str1[i]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
 
int x=-1,f=0;
int stack[MAX];
void push(char);
void pop();
 
void main()
{
    int i,choice;
    char s[MAX],b;
    while (1)
    {
        printf("1-enter string\n2-exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the String\n");
            scanf("%s",s);
            for (i=0;s[i]!='\0';i++)
            {
                b=s[i];
                push(b);
            }
            for (i=0;i<(strlen(s)/2);i++)
            {
                if (stack[x]==stack[f])
                {
                    pop();
                    f++;
                }
                else
                {
                    printf("%s is not a palindrome\n",s);
                    break; 
                }
            }
            if ((strlen(s)/2)==f)
                printf("%s is palindrome\n",s);
            f=0;
            x=-1;
            break;
        case 2:
            exit(0);
        default:
            printf("enter correct choice\n");
        }
    }
}
 
void push(char a)
{
    x++;
    stack[x]=a;
}

void pop()
{
    x--;

}

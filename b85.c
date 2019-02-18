#include <stdio.h>
	
	int main()
	{
	    char ch[100];
	    int i;
	    scanf("%s",ch);
	    for(i=0;ch[i]!='\0';i++)
	    {
	        if(i%2==0)
	        {
	            printf("%c",ch[i]);
	        }
	    }
	    printf("\n");
	    for(i=0;ch[i]!='\0';i++)
	    {
	        if(i%2!=0)
	        {
	            printf("%c",ch[i]);
	        }
	    }
	
	    return 0;
	}

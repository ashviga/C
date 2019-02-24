#include <stdio.h>
	
	int main()
	{
	    int number,s=0;
	    scanf("%d",&number);
	    while(number!=0)
	    {
	        number=number/10;
	        s++;
	    }
	    printf("%d",s);
	    return 0;
	}

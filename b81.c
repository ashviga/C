#include <stdio.h>
	
	int main()
	{
	int kabali,opponent;
	    scanf("%d %d",&kabali,&opponent);
	    if(kabali<opponent)
	    {
	        kabali=opponent-kabali;
	    }
	    else
	    {
	        kabali=kabali-opponent;
	    }
	    printf("%d",kabali);
	
	    return 0;
	}

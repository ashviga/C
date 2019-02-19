#include <stdio.h>

int main()
{
    int a;
	scanf("%d",&a);
	while(a!=0)
	{
		if(a%10==0)
		{
			printf("%d",a);
			break;
		}
		a++;
	}
return 0;
}

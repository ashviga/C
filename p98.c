#include <stdio.h>

int main(void) {
	char arr[10];
	int n,flag,i,j;
	scanf("%s %d",arr,&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;arr[j]!='\0';j++)
		{
			if(arr[j]==i)
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
			
		}
		if(flag!=1)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

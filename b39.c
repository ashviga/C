#include <stdio.h>

int main(void) 
{
	int array[20];
	int a,i,max=array[0];
	printf("enter the number of elements:");
	scanf("%d",&a);
	printf("\n enter the array elements:");
	for(i=0;i<a;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<a;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	printf("\nthe maximum of the numbers is:%d",max);
	return 0;
}

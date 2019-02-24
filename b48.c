#include<stdio.h>
	

	int main()
	{
	  int a[200],r,i,sum=0,avg;
	  printf("enter the number");
	  scanf("%d",&r);
	for(i=0;i<r;i++)
	{
	  scanf("%d",&a[i]);
	}
	

	  for(i=0;i<r;i++)
	  {
	    sum=sum+a[i];
	}
	  avg=sum/r;
	  
	  printf("%d",avg);
	  return 0;
	  }
	  

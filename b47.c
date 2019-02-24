#include<stdio.h>
	

	int main()
	{
	  int a[20],s,i,max,min;
	  printf("enter the number");
	  scanf("%d",&s);
	for(i=0;i<s;i++)
	{
	  scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	  for(i=0;i<s;i++)
	  {
	if(a[i]>max)
	{
	  max=a[i];
	  }
	  if(a[i]<min)
	  {
	    min=a[i];
	  }
	  }
	  printf("%d",max);
	  printf("%d",min);
	  return 0;
	  }

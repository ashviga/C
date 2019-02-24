#include<stdio.h>
	

	int main() 
	{
	  int a,even;
	  
	  printf("enter the number");
	  scanf("%d",&a);
	  if(a%2==0)
	  {
	  even=a-2;
	  }
	  else
	  {
	    even=a-1;
	  }
	  printf("%d",even);
	  return 0;
	}

#include<stdio.h>
	

	int main() 
	{
	  int s,a,b;
	  
	  printf("enter the two numbers");
	  scanf("%d%d",&a,&b);
	  s=a*b;
	  if(s%2==0)
	  {
	  printf("product is even");
	  }
	  else
	  {
	    printf("product is odd");
	  }
	

	  return 0;
	}

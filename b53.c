#include<stdio.h>
	

	int main() 
	{
	  int n,sum=0,t;
	  
	  printf("enter the number");
	  scanf("%d",&n);
	  while(n!=0)
	  {
	    t=n%10;
	    sum=sum+t;
	    n=n/10;
	  }
	  
	  printf("%d",sum);
	  return 0;
	}

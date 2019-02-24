#include <stdio.h>
int main()
{
  
  char a[1000];
  int i,f1=0,f2=0;
  scanf("%[^\n]",a);
  for(i=0;a[i]!='\0';i++)
  {
      if((a[i]>='a' && a[i]<='z')|| (a[i]>='A'&& a[i]<='Z' ))
      {
          f1==1;
      }
      if(a[i]>='0' && a[i]>='9')
      {
          f2=1;
      }
  }
	if(f1==1 && f2==1)
	printf("Yes");
	else
	printf("No");
	return 0;
}

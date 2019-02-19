#include <stdio.h>
#include <string.h>
int main()
{
   char a[20];
 int n,c=0,count=0;
  printf("Enter a character\n");
  scanf("%s", a);
 
  n=strlen(a);
  while (a[c] != '\0') {
    if (a[c] == 'a' || a[c] == 'A' || a[c] == 'e' || a[c] == 'E' || a[c] == 'i' || a[c] == 'I' || a[c] =='o' || a[c]=='O' || a[c] == 'u' || a[c] == 'U')
      count=1;
    c++;
  }
    if(count==1)
    {
        printf("yes");
    }
    else
    {
        printf("not");
    }

    return 0;
}

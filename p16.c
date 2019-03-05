#include <stdio.h>
#include<string.h>
 int main()
{ 
  int N,i,j,s,l=0;
scanf("%d",&N);

int s[N];
for(i=0;i<N;i++)
{
    scanf("%d",&s[i]);
}

  for(i=0;i<N;i++)
 {
    l=1;
    for(j=i+1;j<N;j++)
    {
        if(s[i]!='$'&&s[j]!='$')
        {
        if(s[i]==s[j])
        {
            l++; 
            s[j]='$';
            
         }
      }
    }
    
    if(s[i]!='$')
    {
    
    if(l==1)
    {
 
  s=s[i];
  }
  }}
  printf("%d",s);
return 0;
}

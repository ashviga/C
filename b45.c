include <stdio.h>
int main()
{
 
 int N,s=0;
 scanf("%d",&N);

if(N>=0 && N<=100000000000) 
{
while(N)
 {
   N=N/10;
     s++;
 }
 printf("%d",s);
}

 return 0;
}

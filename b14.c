#include<stdio.h>
void main()
{
 int n,m,i;
 clrscr();
 printf("Enter number for range\n");
 scanf("%d %d",&n,&m);
 for(i=n;i<m;i++)
 {
  if(i%2!=0)
  {
   printf("%d ",i);
  }
 }
 getch();
}

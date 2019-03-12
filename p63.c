#include <stdio.h>
int main()
{
int a;
scanf("%d",&a);
int A[a],B[a],i,j,c=0;
for(i=0;i<a;i++)
{
    scanf("%d",&A[i]);
}
for(i=0;i<a;i++)
{
    scanf("%d",&B[i]);
}
 for(i=0;i<a;i++)
 {
     for(j=0;j<a;j++)
 { 
    if(A[i]==B[j])
     {
     break;
      }   
 }
 
 if(c!=1)
 printf("%d ",A[i]);
 }
 return 0;
 }

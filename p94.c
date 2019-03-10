#include <stdio.h>

int main()
{
    int N,r,i,a[1000],j,k,p=0;
    scanf("%d",&N);
    while(N)
    {
        
        r=N%10;
        a[k]=r;
        N=N/10;
        k++;

    }
    
    
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                
                p++;
            }
            
        }
        
        
        
      
        
}
    
    
    if(p!=0)
    printf("yes");
    else
    printf("no");
    
}

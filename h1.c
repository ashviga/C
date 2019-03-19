#include<stdio.h>
int main(void)
{
	int a[100],b[100],i,j,k,s,q,p[100],count=0,temp;
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(q=0;q<9;q++)
	{
		p[q]=0;
	}
	for(i=0;i<s;i++)
	{
		if(a[i]>=0&&a[i]<=9)
		{
			p[a[i]]++;
		}
	}
	for(q=0;q<9;q++)
	{
		if(p[q]>1)
		{
			b[count]=q;
			count++;
		}
	}
	for(j=0;j<count;j++)
	{
		for(k=j+1;k<count;k++)
		{
			if(b[j]>b[k])
			{
				temp=b[j];
				b[j]=b[k];
				b[k]=temp;
			}
		}
		printf("%d ",b[j]);
	}
	
}

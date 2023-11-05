#include<stdio.h>

int main()
{
	int i,j,n,x,t,s,k;
	scanf("%d",&n);
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
		for(s=0;s<1;s++)
		{	
		for(j=0;j<x;j++)
		{
				printf("%d",i+1);
			}
			printf("%d\n",i+2);
		}
		}
		else
	{
			for(t=0;t<1;t++)
			{
		printf("%d",i+2);
		for(k=0;k<x;k++)
		{
			printf("%d",i+1);
		}
		printf("\n");
		    }
	}
    }
    return 0;
}
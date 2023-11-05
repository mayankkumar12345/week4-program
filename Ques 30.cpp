#include<stdio.h>

int main()
{
	int i,j,k,n,l,s;
	scanf("%d",&n);
    

	for(i=0;i<n;i++)
	{
		for(s=0;s<i+1;s++)
		{
			printf("  ");
		}
		for(j=0;j<1;j++)
		{
			printf("*");
		}
		for(k=0;k<3*n-1-4*i;k++)
		{
			if(k%2==0)
			{
				printf(" ");
			}
			else
			{
				printf("_");
			}
	}
	if(i!=n-1)
		{
		for(l=0;l<1;l++)
		{
			printf(" *");
		}
	}
	printf("\n");
	}
	return 0;
}
	
	

#include<stdio.h>

int main()
{
	int i,n,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		{
			printf(" ");
		}
		if(i%2 == 0)
		{
			for(j=0;j<i+1;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for(j=0;j<i+1;j++)
			{
				printf("-");
			}
			printf("\n");
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(s=0;s<i+1;s++)
		{
			printf(" ");
		}
		if(i%2 == 0 )
		{
			for(j=n-1-i;j>0;j--)
			{
				printf("-");
			}
			printf("\n");
		}
		else 
		{
			for(j=n-1-i;j>0;j--)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
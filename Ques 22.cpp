#include<stdio.h>

int main()
{
	int i,n,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<1;j++)
		{
			printf("%d",i+1);
			for(s=0;s<i;s++)
			{
				printf("*%d",i+1);
			}
			printf("\n");
		}
		
	}
	for(i=3;i>=0;i--)
	{
		for(j=0;j<1;j++)
		{
			printf("%d",i+1);
			for(s=0;s<i;s++)
			{
				printf("*%d",i+1);
			}
			printf("\n");
		}
		
}
	return 0;
}
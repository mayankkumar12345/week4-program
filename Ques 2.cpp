#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter Rows");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
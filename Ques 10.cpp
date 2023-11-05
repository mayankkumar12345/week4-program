#include<stdio.h>

int main()
{
	int i,j,n;
	printf("Enter Value");
	scanf("%d",&n);
	printf("Enter Rows %d \n",2*n);
	for (i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("*");
	}
	printf("\n");
}
    for(i=n;i<2*n;i++)
	{
		for (j=0;j<2*n-i;j++)
		{
			printf("*");
		}
		printf("\n");
			}		
		return 0;
		}
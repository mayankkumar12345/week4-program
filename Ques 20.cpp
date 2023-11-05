#include<stdio.h>

int main ()
{
	int i,j,n,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			s = s + 1;
			printf("%d ",s);
		}
		printf("\n");
	}
	return 0;
}
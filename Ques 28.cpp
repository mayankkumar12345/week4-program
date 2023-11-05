#include<stdio.h>

int main()
{
	int i,n,j;
	scanf("%d",&n);
	char ch;
	scanf("%c",&ch);
	for(i=0;i<n;i++)
	{
		for(j=n-i;j>0;j--)
		{
			printf("%c",ch);
		}
		ch++;
		printf("\n");
	}
	return 0;
}
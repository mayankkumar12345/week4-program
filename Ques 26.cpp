#include<stdio.h>
int main ()
{
	int i,j,k,n;
	char ch;
	printf("Enter the value of n");
	scanf("%d",&n);
	ch='E';
	printf("%c\n",ch);
	for(i=1;i<n;i++)
	{ 
		for(j=0;j<1;j++)
		{
			ch = ch - i;
			printf("%c",ch);
		}
		for(k=0;k<i;k++)
		{
			printf("%c",++ch);
		}
		
		printf("\n");
	}
	return 0;
}
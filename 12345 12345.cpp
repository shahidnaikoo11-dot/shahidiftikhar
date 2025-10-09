//program in c to didplay the series 12345 12345 12345...nterms
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter value of n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\t");
	}
	return 0;
	
	
}

//program in c to display the table from 2 to 20
#include<stdio.h>
int main()
{
	int n,i,j,x;
	printf("enter the value of n");
	scanf("%d",&n);
	for (i=2;i<=20;i++)
	{
		for(j=1;j<=n;j++)
		{
			x=i*j;
			printf("%dx%d=%d\n",i,j,x);
		}
		
	}
	return 0;
}

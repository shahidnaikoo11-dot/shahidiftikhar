//program in c to find the sum of the following series 2,4,16,256...nterms
#include<stdio.h>
int main()
{
	int n,i;
	long long int x,sum=0;
	x=2;
	printf("enter the number of terms");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+x;
		x=x*x;
	}
	printf("the sum of series =%d",sum);
	return 0;
}

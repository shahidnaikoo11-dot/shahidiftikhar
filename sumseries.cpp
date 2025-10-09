//program in c to find the sum of following series 1,2,3,....n
#include<stdio.h>
int main()
{
	int n,i,sum;
	sum=0;
	printf("enter the number of items you wish to display in series");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum=sum+i;
    }
	printf("sum is %d",sum);
    return 0;
}

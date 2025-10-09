//program in c to find the product of the following series 1,2,3,...n
#include<stdio.h>
int main()
{
	int n,i,product;
	product=1;
	printf("enter the number of items you wish to display in series");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
	product=product*i;
    }
    printf("product is %d",product);
    return 0;
}

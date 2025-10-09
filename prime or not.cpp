//program in c to choose whether a number is prime or not
#include<stdio.h>
int main()
{
	int i,x;
	int flag=1;
	printf("enter a number");
	scanf("%d",&x);
	for (i=2;i<=x-1;i++)
	{
		if(x%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("the number is prime");
	}
	else
	{
	printf("the number is not prime");
	}
	return 0;
}

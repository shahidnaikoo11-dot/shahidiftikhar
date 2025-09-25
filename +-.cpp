//program in c to find whether a number is positive or negative
#include<stdio.h>
int main()
{
	int x;
	printf("enter the number \t");
	scanf("%d",&x);
	if(x>0)
	{
	printf("%d is positive",x);
    }
    if (x<0)
    {
    	printf("%d is negative",x);
    }
	return 0;
}

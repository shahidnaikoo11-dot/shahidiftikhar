//program in c to display digits of any natural number in reverse order
#include<stdio.h>
int main()
{
	int x,q,r;
	printf("enter the number");
	scanf("%d",&x);
	q=x/10;
	r=x%10;
	printf("%d%d",r,q);
	return 0;
}

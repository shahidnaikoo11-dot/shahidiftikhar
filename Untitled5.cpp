//program in c to swap two integers 
#include<stdio.h>
int main()
{
	int a,b,temp;
	//Taking input
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("before swapping:a=%db=%d\n", a,b);
	
	//swapping 
	temp=a;
	a=b;
	b=temp;
	printf("After swapping:a=%d b=%d\n",a,b);
return 0;
} 

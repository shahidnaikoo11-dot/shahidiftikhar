//program in c to display the fibonacci series (0,1,1,2,3,5,8... nterms)
#include<stdio.h>
int main()
{
	int n,i,a,b,c ;
	printf("enter the number of terms");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d%d",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
	}
	return 0;
}

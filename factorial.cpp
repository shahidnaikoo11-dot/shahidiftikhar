//program in to find the factorial of the number
#include<stdio.h>
int main()
{
int n,i,factorial;
factorial=1;
printf("enter the number of items you wish to display");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
	factorial=factorial*i;
}
printf("factorial of %d=%d",n,factorial);
return 0;
}

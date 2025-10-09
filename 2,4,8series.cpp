//program in c to display the following series 2,4,8,16,32....n
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,z;
	int x,sum;
	printf("enter the number of terms");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
    	z=pow(2,i);
	    printf("%d",z);
    }
    return 0;
}

//program in c to find the larger of two integers 
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the two integers");
	scanf("%d%d",&x,&y);
	if(x>y)
	{
    printf("%d is greater than %d", x,y);
    }
    if(y>x)
    {
    printf("%d is greater than %d", y,x);
    }
    if(x==y)
    {
    printf("%d is equal to %d", x,y);
    }
    return 0;
}
 


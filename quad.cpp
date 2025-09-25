//program in c to find the roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,D,r1,r2;
	printf("enter the values of a,bandc");
	scanf("%d%d%d",&a,&b,&c);
	D=b*b-4*a*c;
	if(D>0)
	{
		r1=(-b+sqrt(D))/(2*a);
		r2=(-b-sqrt(D))/(2*a);
		printf("Roots are real and distinct=%d and %d",r1,r2);
    }
    if(D==0)
    {
    	r1=-b/(2*a);
    	printf("the equation has only one root=%d",r1);
    }
    if(D<0)
    {
    	return 0;
    }
}

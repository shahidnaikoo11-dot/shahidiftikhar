//program in c to swap two numbers without using a 3rd variable
#include<stdio.h>
int main()
{
	int x,y ;
	//input the two numbers
	printf("enter two numbers");
	scanf("%d%d",&x,&y);
	printf("Numbers before swapping are %d and %d" , x,y);
	//swapping 
	x=x+y;
	y=x-y;
	x=x-y;
	printf("Numbers after swapping are %d and %d",x,y);
	return 0;
	
}

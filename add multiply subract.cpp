//program in c to add two numbers if the user enters 1,subtract two numbers if the user enters 2, and multiply two numbers if the user enters 3
#include<stdio.h>
int main()
{
	int i,x,y,z;
	printf("enter two numbers");
	scanf("%d%d",&x,&y);
	printf("enter 1 for addition,2 for subtraction and 3 for multiplication");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
		z=x+y;
		break;
		case 2:
		z=x-y;
		break;
		case 3:
		z=x*y;
		break;
		default:
		printf("you have entered incorrect option");
		break;
    }
	printf("the answer is %d" ,z);
	return 0;
}



//program in c to display name of month while taking month from the user as a number 
#include<stdio.h>
int main()
{
	int i;
	printf("enter your option");
	scanf("%d",&i);
	switch(i)
	{
		case 1: 
		printf("january");
		break;
		case 2:
		printf("february");
		break;
		case 3:
		printf("march");
		break;
		case 4:
		printf("april");
		break;
		case 5:
		printf("may");
		break;
		case 6:
		printf("june");
		break;
		case 7:
		printf("july");
		break;
		case 8:
		printf("august");
		case 9:
		printf("september");
		break;
		case 10:
		printf("october");
		case 11:
		printf("november");
		break;
		case 12:
		printf("december");
		break;
    	default:
		printf("incorrect option");
		break;
			
	}
		return 0;
}
			
				
			
				
			
	


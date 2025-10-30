//program in c to demonstrate the use of continue and break keywords 
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
  {
	if(i==5)
	{
		break;
	}
	printf("%d",i);
  }
	return 0;
}

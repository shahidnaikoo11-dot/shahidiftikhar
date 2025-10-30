//program in c to input a string from a user and find its length
#include<stdio.h>
int main()
{
	char str[100],i;
	printf("enter the string");
	scanf("%s",&str);
	i=0;
	while(str[i]!='\0')
	{
		i=i+1;
		i++;
	}
	printf("%d",i);
	return 0;
}

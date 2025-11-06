//program in c to display whether a string is palendrom or not 
#include<stdio.h>
int main()
{
	char str[100],i,n,j;
	i=0;
	int flag = 1;
	printf("enter the string ");
	scanf("%s",&str);
	
	while(str[i] != '\0')
	{	
		i++;
	}
	
	

	n=i;
	i=0;
	j=n-1;
	while(i<j)
	{
		if(str[i] != str[j])
		{
			printf("NOT A PALENDROME");
			flag = 0;		    
			break;
		}
		i++;
		j--;
	}
	
	if(flag==1)
	{
			printf("IT IS A PALENDROME");
	}
	return 0;
}

//program in c to input a matrix from the user and display the same 
#include<stdio.h>
int main()
{
	int a[10][10];
	int m,n,i,j;
	printf("enter the number of rows and columns of the matrix");
	scanf("%d%d",&m,&n);
	printf("enter the number of elements of matrix row wise");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	//display the matrix
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//program in c to input a transpose of a matrix from the user and display the same 
#include<stdio.h>
int main()
{
	int a[10][10],transpose[10][10];
	int m,n,i,j;
	printf("enter the number of rows and columns of the matrix");
	scanf("%d%d",&m,&n);
	printf("enter the number of elements of matrix row wise \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	//display the matrix
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		transpose[i][j]=a[i][j];
		}
		
	}
	printf("transpose of matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("%d\t",transpose[i][j]);	
		}
		printf("\n");
		
	}
	return 0;
}

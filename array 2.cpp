//program in c to input the integer array from the user and display the same
#include<stdio.h>
int main()
{

   int a[100],n,i;
   printf("enter the number of elements");
   scanf("%d",&n);
   printf("enter the elements");
   
   {
   	scanf("%d",&a[i]);
	   
   }
//display the elements on the monitor
for(i=n-1;i>=0;i--)
{
	printf("%d",a[i]);
}
  return 0; 
}

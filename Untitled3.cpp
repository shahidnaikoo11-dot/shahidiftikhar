#include<stdio.h>
int main()
{
    int marks[5];
    int total=0;
    int i;
    printf("enter the marks for 5 subjects:\n");
    for(i=0 ; i<5 ; i++)
    {
        printf("subject %d",i+1);
        scanf("%d",&marks[i]);
        total += marks[i];
    }
    printf("total marks = %d\n",total);
    return 0;
}

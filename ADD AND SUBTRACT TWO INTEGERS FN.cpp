//program in c to add and subtract two integers using functions (a+b,a-b,b-a)
#include <stdio.h>

void swap(int a, int b); 

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore swapping:");
    printf("\n x = %d, y = %d\n", x, y);
    swap(x, y);

    printf("\nAfter swapping (in main):");
    printf("\n x = %d, y = %d", y, x);

    return 0;
}

void swap(int a, int b) 
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("\n\nInside swap function:");
    printf("\n a = %d, b = %d\n", b, a);
}



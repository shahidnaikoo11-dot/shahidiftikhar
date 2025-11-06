//program in c to find the sum of the elements of an integer array
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Ask user for number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Display result
    printf("The sum of the elements of the array is: %d\n", sum);

    return 0;
}



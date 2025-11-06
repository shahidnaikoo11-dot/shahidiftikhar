//program in c to search an element in an integer array
#include <stdio.h>

int main() {
    int n, i, key, found = 0;

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

    // Ask for the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Search the element (Linear Search)
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d.\n", key, i + 1);
            found = 1;
            break;
        }
    }

    // If element not found
    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}


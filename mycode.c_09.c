#include <stdio.h>

int main() {
    int n, i;

    printf("=========================================\n");
    printf("      FIND LARGEST ELEMENT IN ARRAY      \n");
    printf("=========================================\n");
                                                                    // Prompt for array size with validation
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("[Error] Please enter a valid positive integer for the array size.\n");
        return 1;
    }
    int arr[n];

    printf("\nEnter %d element(s):\n", n);
    for (i = 0; i < n; i++) {
        printf(" Element [%d]: ", i);
        if (scanf("%d", &arr[i]) != 1) {
            printf("[Error] Invalid integer input detected.\n");
            return 1;
        }
    }
                                                                     // Assume first element is largest
    int largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];                                           // Update largest element
        }
    }
    printf("\n-----------------------------------------\n");
    printf(" Summary Results:\n");
    printf(" - Total Elements Checked : %d\n", n);
    printf(" - Largest Element Found  : %d\n", largest);
    printf("=========================================\n");

    return 0;
}
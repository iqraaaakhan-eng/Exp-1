#include <stdio.h>

int main() {
    int n, i;

    printf("===================================\n");
    printf("     REVERSE ARRAY USING POINTER   \n");
    printf("===================================\n");
    printf("Enter size: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("[Error] Enter a valid positive size.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("[Error] Invalid integer input.\n");
            return 1;
        }
    }
    int *ptr = &arr[n - 1]; // Point to the last element

    printf("-----------------------------------\n");
    printf(" Reversed Array: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d", *ptr);
        if (i > 0) printf(", ");
        ptr--; // Move memory pointer backward
    }
    printf("\n===================================\n");

    return 0;
}
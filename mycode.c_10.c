#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("=========================================\n");
    printf("         MATRIX ADDITION PROGRAM         \n");
    printf("=========================================\n");
                                                         // Prompt for rows and columns with validation
    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) {
        printf("[Error] Please enter valid positive integers for rows and columns.\n");
        return 1;
    }
                                    // Declare 2D arrays (Variable Length Arrays supported in C99 and later)
    int a[r][c], b[r][c], sum[r][c];

                                                                            // Input elements for Matrix A
    printf("\nEnter elements of Matrix A (%dx%d):\n", r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf(" A[%d][%d]: ", i, j);
            if (scanf("%d", &a[i][j]) != 1) {
                printf("[Error] Invalid integer input.\n");
                return 1;
            }
        }
    }
                                                                        // Input elements for Matrix B
    printf("\nEnter elements of Matrix B (%dx%d):\n", r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf(" B[%d][%d]: ", i, j);
            if (scanf("%d", &b[i][j]) != 1) {
                printf("[Error] Invalid integer input.\n");
                return 1;
            }
        }
    }
                                                                            // Add corresponding elements
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
                                                                   // Display the resulting matrix cleanly
    printf("\n-----------------------------------------\n");
    printf(" Result: Sum of the Two Matrices\n");
    printf("-----------------------------------------\n");
    for (i = 0; i < r; i++) {
        printf(" | ");
        for (j = 0; j < c; j++) {
            printf("%4d ", sum[i][j]);
        }
        printf(" |\n");
    }
    printf("========================================-\n");

    return 0;
}
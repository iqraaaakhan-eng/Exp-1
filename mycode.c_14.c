#include <stdio.h>

int main() {
    int no1, no2, sum;
    int *p1 = &no1, *p2 = &no2;

    printf("===================================\n");
    printf("      POINTER ADDITION PROGRAM     \n");
    printf("===================================\n");
    printf("Enter two numbers: ");
    if (scanf("%d %d", p1, p2) != 2) {
        printf("[Error] Enter valid integers.\n");
        return 1;
    }
    sum = *p1 + *p2;

    printf("-----------------------------------\n");
    printf(" Sum (%d + %d) = %d\n", *p1, *p2, sum);
    printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");

    return 0;
}
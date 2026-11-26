#include <stdio.h>

int main()
{
    int start, end, i, sum = 0;

    printf("========================================\n");
    printf("         SUM OF ODD NUMBERS             \n");
    printf("========================================\n");

    printf("Enter start number : ");
    scanf("%d", &start);
    
    printf("Enter end number   : ");
    scanf("%d", &end);
                                                 // Swap if entered in reverse order
    if (start > end) 
    {
        int temp = start;
        start = end;
        end = temp;
    }
    for (i = start; i <= end; i++)
    {
        if (i % 2 != 0) // Check if odd number
        {
            sum = sum + i;
        }
    }
                                                             // Formatted Output Results
    printf("               RESULTS                  \n");
    printf("Range          : %d to %d\n", start, end);
    printf("Sum of Odds    : %d\n", sum);
    printf("----------------------------------------\n");

    return 0;
}
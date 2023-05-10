//  1 
//  6  2
//  10  7  3
//  13  11  8  4
//  15  14  12  9  5

#include <stdio.h>

int main()
{
    int row, p, k = 1;
    printf("Enter number of lines: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        p = k;
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ", p);
            p = p - (row - i + j);
        }
        k = k + 1 + row - i;
        printf("\n");
    }
    return 0;
}
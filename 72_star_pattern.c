// 1 
//  1  0
//  1  0  1
//  1  0  1  0
//  1  0  1  0  1
//  1  0  1  0  1  0

#include <stdio.h>

int main()
{
    int k = 0;
    for (int i = 1; i <= 6; i++)
    {
        k = 1;
        for (int j = 1; j <= 6; j++)
        {
            if (j <= i)
            {
                printf(" %d ", k);
                k = 1 - k;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}
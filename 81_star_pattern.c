//  *           *
//     *     *
//        *
//     *     *
//  *           *

#include <stdio.h>

int main()
{
    int num;
    printf("Enter number of lines: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (j == i || j == num + 1 - i)
            {
                printf(" * ");
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
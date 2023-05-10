//           A
//        A  B  A
//     A  B  C  B  A
//  A  B  C  D  C  B  A

#include <stdio.h>

int main()
{
    char k;
    for (int i = 1; i <= 4; i++)
    {
        k = 'A';
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                printf(" %c ",k);
                j<4?k++:k--;
                // k++;
            }
            else
                printf("   ");
        }
        printf("\n");
    }

    return 0;
}
//          1
//        1  2  A
//     1  2  3  A  B
//  1  2  3  4  A  B  C

#include <stdio.h>

int main()
{
    int k;
    for (int i = 1; i <= 4; i++)
    {
        k = 49; // ASCII code 49 = 1
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {

                printf(" %c ", k);
                k++;
                if (j == 4)
                    k = 65;
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
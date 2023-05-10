//           A  1
//        A  B  1  2
//     A  B  C  1  2  3
//  A  B  C  D  1  2  3  4

#include <stdio.h>

int main()
{
    int temp;
    char k;
    for (int i = 1; i <= 4; i++)
    {
        k = 'A';
        temp = 1;
        for (int j = 1; j <= 8; j++)
        {
            if (j >= 5 - i && j <= 4 + i)
            {
               j<=4? printf(" %c ",k++):printf(" %d ",temp++);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
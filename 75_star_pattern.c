//  A 
//  B  A
//  C  B  A
//  D  C  B  A

#include <stdio.h>

int main()
{
    char k = 'A';
    for (int i = 1; i <= 4; i++)
    {
        k = 64 + i;
        for (int j = 1; j <= 4; j++)
        {
            if (j <= i)
            {
                printf(" %c ", k);
                k--;
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
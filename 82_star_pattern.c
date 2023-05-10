//  A  B  C  D  E  F  G 
//  A  B  C     E  F  G
//  A  B           F  G
//  A                 G

#include <stdio.h>

int main()
{
    int num;

    for (int i = 1; i <= 4; i++)
    {
        num =65;
        for (int j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                printf(" %c ",num);
                // j<=4?num++:num--;
            }
            else
            {
                printf("   ");
            }
            num++;
        }
        printf("\n");
    }
    return 0;
}
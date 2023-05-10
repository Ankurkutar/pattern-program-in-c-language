//           1
//        2  1  2
//     3  2  1  2  3
//  4  3  2  1  2  3  4


// this program depend on value of i

#include <stdio.h>

int main()
{
    int k = 1;
    for (int i = 1; i <= 4; i++)
    {
        k = i;
        for (int j = 1; j <= 7; j++)
        {
            if (j>=5-i&&j<=3+i)
            {
                printf(" %d ",k);
                j<4?k--:k++;
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
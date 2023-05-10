

#include <stdio.h>

int main()
{
    int k = 1;
    for (int i = 1; i <= 7; i++)
    {
        // k = i;

        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - k && j <= 3 + k)
            {
                printf(" * ");
                j<=4?k++:k--;
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

// star pattern program in c language

//  *
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *
//  *  *
//  *

// #include <stdio.h>

// int main()
// {
//     int k = 0;
//     for (int i = 1; i <= 7; i++)
//     {
//         i <= 4 ? k++ : k--;
//         for (int j = 1; j <= 7; j++)
//         {
//             if (j<=k)
//             {
//                 printf(" * ");
//             }
//             else
//             {
//                 printf("   ");
//             }
//         }
//         printf("\n");
//     }
// }

// generlaize form

#include<stdio.h>

// solve even or odd problem

//  *
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *  *
//  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *
//  *  *  *  *  *  *
//  *  *  *  *  *          
//  *  *  *  *
//  *  *  *
//  *  *
//  *

int main()
{
    int k = 0;
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        if (rows % 2 == 0)
        {
            if (i <= rows / 2)
                k++;
            if (i > rows / 2 + 1)
                k--;
        }
        else
            i <= (rows + 1) / 2 ? k++ : k--;

        for (int j = 1; j <= (rows + 1) / 2; j++)
        {
            if (j <= k)
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
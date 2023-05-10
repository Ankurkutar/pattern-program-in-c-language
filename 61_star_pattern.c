// star pattern program in c 

//  *  *  *  *  *  *  * 
//     *  *  *  *  *
//        *  *  *
//           *

// #include <stdio.h>

// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 7; j++)
//         {
//             if (j >= i && j <= 8 - i)
//             {
//                 printf(" * ");
//             }
//             else
//                 printf("   ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// generlaize  form

 #include <stdio.h>

int main()
{
    int row;
    printf("enter the number of rows: ");
    scanf("%d",&row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row*2-1; j++)
        {
            if (j >= i && j <= 2*row - i)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

// *******************
//  *****************
//   ***************
//    *************
//     ***********
//      *********     
//       *******
//        *****
//         ***
//          *
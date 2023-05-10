

// aplhabet triangle

#include<stdio.h>


int main()
{
    char count = 'A';
    
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%c",count);
            count++;
        }
        printf("\n");
    }

    return 0;
}

// int main()
// {
//     int count = 1;
    
//     for(int i = 1; i <= 4; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             printf("%d",count);
//             count++;
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main()
// {
//     char count = 'A';
    
//     for(char i = 'A'; i <= 'F'; i++)
//     {
//         for(char j = 'A'; j <= i; j++)
//         {
//             printf("%c",count);
//             count++;
//         }
//         printf("\n");
//     }

//     return 0;
// }
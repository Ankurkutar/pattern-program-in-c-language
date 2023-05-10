
// perfect number in c programming

// for example (1 + 2 + 3 = 6)


#include<stdio.h>

// int main()
// {
//     int number, sum = 0;
//     int temp;
//     printf("Enter the Any number: ");
//     scanf("%d", &number);

//     for (int i = 1; i < number; i++)
//     {
//         temp = number % i;
//         if (temp == 0)
//         {
//             sum = sum + i;
//         }
//     }
//     if (sum == number)
//     {
//         printf("%d is a perfect Number\n",number);
//     }
//     else
//     {
//         printf("%d is not perfect Number\n",number);
//     }
//     return 0;
// }

// using while loop

int main()
{
    int number, sum = 0;
    int temp;
    printf("Enter the Any number: ");
    scanf("%d", &number);
    int i = 1;
    while ( i < number )
    {
        temp = number % i;
        if (temp == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    if (sum == number)
    {
        printf("%d is a perfect Number\n",number);
    }
    else
    {
        printf("%d is not perfect Number\n",number);
    }
    return 0;
}
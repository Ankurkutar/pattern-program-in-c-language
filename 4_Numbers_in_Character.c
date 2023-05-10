
// number in character for exact number print

// in this program have some exception for 100 200 300 400 500 600 700 800 900

#include <stdio.h>

int main()
{
    long int number, temp, rev, var, sum = 0;
    printf("Enter a numbers: ");
    scanf("%d", &number);

    while (number != 0)
    {
        temp = number % 10;
        sum = sum * 10 + temp;
        number = number / 10;
    }

    var = sum;
    while (var != 0)
    {
        rev = var % 10;

        switch (rev)
        {
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        case 0:
            printf("Zero ");
            break;
        default:
            printf("Enter valid number: ");
            break;
        }
        var = var / 10;
    }

    return 0;
}
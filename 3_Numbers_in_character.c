
// NUmber in character for reverse

#include <stdio.h>


void character(int);

int main()
{
    int number, temp,var,sum =0;
    printf("Enter a numbers: ");
    scanf("%d", &number);

    var = number;
    while(number != 0)
    {
        temp  =  number%10;
        number = number/10;
        character(temp);

    }
    

    // switch (number)
    // {
    // case 1:
    //     printf("One");
    //     break;
    // case 2:
    //     printf("Two");
    //     break;
    // case 3:
    //     printf("Three");
    //     break;
    // case 4:
    //     printf("Four");
    //     break;
    // case 5:
    //     printf("Five");
    //     break;
    // case 6:
    //     printf("Six");
    //     break;
    // case 7:
    //     printf("Seven");
    //     break;
    // case 8:
    //     printf("Eight");
    //     break;
    // case 9:
    //     printf("Nine");
    //     break;
    // case 0:
    //     printf("Zero");
    //     break;
    // default:
    //     printf("Enter valid number: ");
    //     break;
    // }
    return 0;
}

void character(int num)
{
    switch (num)
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
}
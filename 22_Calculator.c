

// calculator in c programming

#include <stdio.h>
#include <stdlib.h>

int addition();
int subtraction();
int multiply();
int division();
int square();
int square_root();

int main()
{
    int choice = 0;
    printf("\n*************************** WELCOME ***************************\n\n");

    while (choice != 7)
    {
        printf("select operation and perform any task:\n");
        printf("=====================================\n\n");
        printf("\n1.Addtion\n2.Subtraction\n3.Multiplication\n4.Divivsion\n5.Square()\n6.Square_root()\n7.exit(0)\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiply();
            break;
        case 4:
            division();
            break;
        case 5:
            square();
            break;
        case 6:
            square_root();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("Enter a valid option:\n");
            break;
        }
        printf("\n\n********************************************** \n ");
    }

    return 0;
}

int addition()
{
    int num, sum = 0, temp;
    printf("How many numbers you want to add: ");
    scanf("%d", &num);
    printf("Enter the number: ");
    for (int i = 1; i <= num; i++)
    {
        scanf("%d", &temp);
        sum = sum + temp;
    }
    printf("Sum of numbers is %d: ", sum);
    return 0;
}

int subtraction()
{
    int num, temp;
    int num2;
    printf("Enter the first number: ");
    scanf("%d", &num);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    temp = num - num2;
    printf("Subtraction of %d and %d numbers is %d: ", num, num2, temp);
    return 0;
}

int multiply()
{
    int num, temp;
    int num2;
    printf("Enter the first number: ");
    scanf("%d", &num);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    temp = num * num2;
    printf("multiplication of %d and %d numbers is %d: ", num, num2, temp);
    return 0;
}

int division()
{
    int num, temp;
    int num2;
    printf("Enter the first number: ");
    scanf("%d", &num);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num2 == 0)
    {
        printf("Divisor cannot be zero please enter anothe value\n");
    }
    temp = num / num2;
    printf("division of  %d and %d numbers is %d: ", num, num2, temp);
    return 0;
}

int square()
{
    int num, temp;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num * num;
    printf("Square of %d numbers is %d: ", num, temp);
    return 0;
}

int square_root()
{
    int num, temp;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num * num * num;
    printf("Square root of %d numbers is %d: ", num, temp);
    return 0;
}
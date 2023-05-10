
// strong number program

// A number can be said as a strong number when the sum of the factorial of the individual digits is equal
//  to the number.

// For example, 145 is a strong number.

#include <stdio.h>

int main()
{
    int num, temp, reminder, sum = 0, fact, loop;
    printf("Enter a Number: ");
    scanf("%d", &num);
    temp = num;

    while (num != 0)
    {
        reminder = num % 10;

        loop = 1;
        fact = 1;
        while (loop <= reminder)
        {
            fact = fact * loop;
            loop++;
        }
        sum = sum + fact;
        num = num / 10;
    }

    if (sum == temp)
    {
        printf("Number is strong %d", temp);
    }
    else
    {
        printf("Number is not strong %d", temp);
    }

    return 0;
}
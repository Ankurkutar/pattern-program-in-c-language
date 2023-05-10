
// lcm of two number in c programming

#include <stdio.h>

int main()
{
    int num1, num2;
    int max_num;
    int flag = 1;
    printf("Enter the first Number:\n");
    scanf("%d", &num1);
    printf("Enter the second Number:\n");
    scanf("%d", &num2);
    max_num = (num1 > num2) ? num1 : num2;

    while (flag)
    {
        if (max_num % num1 == 0 && max_num % num2 == 0)
        {
            printf("the Lcm of %d ,%d is %d ", num1, num2, max_num);
            break;
        }
        max_num++;
    }

    return 0;
}
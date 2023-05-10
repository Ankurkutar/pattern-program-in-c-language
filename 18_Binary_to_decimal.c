
// Binary to decimal number in c programming

#include<stdio.h>

int main()
{
    int num, binary_num, decimal_num = 0,rem,base = 1;
    printf("\nEnter the Binary number with the combination 0 of 1: ");
    scanf("%d",&num);
    binary_num = num;

    while(num > 0)
    {
        rem = num%10;
        decimal_num = decimal_num + rem *base;
        num = num/10;
        base = base*2;
    }

    printf("the binary number is: %d and decimal is: %d",binary_num,decimal_num);

    return 0;
}
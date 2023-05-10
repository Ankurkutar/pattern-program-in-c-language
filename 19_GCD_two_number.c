
// GCD program of two number in c programming
// Greatest Common Divisor of two or more numbers.
//  it is also known as the Highest Common Factor (HCF)

#include<stdio.h>

int main()
{
    int num1,num2,GCD;
    printf("\nEnter first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    for(int i = 1; i <= num1 && i <= num2; i++)
    {
        if(num1%i == 0 && num2%i == 0)
        {
            GCD = i;
        }
    }
    printf("GCD of two number %d and %d is: %d",num1,num2,GCD);
    return 0;
}
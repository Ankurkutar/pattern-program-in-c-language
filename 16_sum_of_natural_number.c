
// sum of natural number in c programming

#include<stdio.h>

int main()
{
    int sum = 0;
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    for(int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("sum of value is %d",sum);
    return 0;
}
// For example, (59, 61) and (71, 73) are twin prime pairs, and the difference between these numbers is 61 - 59 = 2, and 73 - 71 = 2

#include<stdio.h>

int twin_prime(int);

int main()
{
    int num,count = 0;
    printf("Enter the number to get twin prime number: ");
    scanf("%d",&num);

    for(int i =2; i <= num; i++)
    {
        if(twin_prime(i) && twin_prime(i+2))
        {
            printf("The twin prime number is: (%d,%d)\n",i,i+2);
    count++;
        }
    }
    printf("Total number of twin pair number are: %d",count);
    return 0;
}

int twin_prime(int n)
{
    int i;
    for(i = 2; i <= n/2; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    if(i>n/2)
    {
        return 1;
    }
}
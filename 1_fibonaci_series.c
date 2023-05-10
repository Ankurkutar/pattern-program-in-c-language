
#include<stdio.h>

int main()
{
    int a = 0,b = 1,temp;
    int n;
    printf("enter the term of numbers: ");
    scanf("%d",&n);
    printf("%d  %d  ",a,b);
    for(int i =2; i < n; i++)
    {
        temp = a + b;
        printf(" %d\t",temp);
        a  =  b;
        b  =  temp;
    }
    return 0;
}
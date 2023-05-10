
#include<stdio.h>

int main()
{
    int a = 0, b = 1;
    int temp,n;
    
    printf("Enter the terms of series: ");
    scanf("%d",&n);
    
    for(int i = 1; i <= n; i++)
    {
        a = 0;
        b = 1;
        printf("%d\t",b);
        for (int j = 1; j < i; j++)
        {
            temp = a+b;
            printf("%d \t",temp);
            a = b;
            b = temp;
        }
        printf("\n");
        
    }


    return 0;
    
}
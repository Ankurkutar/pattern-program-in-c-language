

// main function in c programming we will pass paramerter in main


#include<stdio.h>


int main()
{
    static int num = 20;
    if(--num)
    {
        printf("%d  ",num);
        main(20);
    }
}
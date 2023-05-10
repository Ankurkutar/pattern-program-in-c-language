

// \*****/
// *\***/*
// **\*/**
// ***\***
// **/*\**
// */***\*
// /*****\


#include <stdio.h>

int main()
{
    printf("\n");

    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == i || j == 8 - i)
            {
                if (i == j)
                {
                    printf("\\");
                }
                else
                    printf("/");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
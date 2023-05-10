
// C Program to convert 24 Hour time to 12 Hour time

#include <stdio.h>
#include <string.h>

void convert_12(char *str)
{
    int h1 = (int)str[0];
    int h2 = (int)str[1];
    int hh = h1 * 10 + h2;
    char Meridien[2];
    if (hh < 12)
    {
        Meridien[0] = 'A';
        Meridien[1] = 'M';
    }
    else
    {
        Meridien[0] = 'P';
        Meridien[1] = 'M';
    }

    hh %= 12;
    if (hh == 0)
    {
        printf("12");
        for (int i = 2; i < 8; i++)
        {
            printf("%c", str[i]);
        }
    }
    else
    {
        printf("%d",hh);
        for(int i = 2; i < 8; i++)
        {
            printf("%c",str[i]);
        }
    }
    printf("%c%c",Meridien[0],Meridien[1]);
}

int main()
{
    char str[8] = "13:35:20";

    convert_12(str);

    return 0;
}
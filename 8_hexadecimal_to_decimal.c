
// hexadecimal to binary

#include<stdio.h>
#include<math.h>
#include<string.h>

// decimal              hexadecimal
//  0                      0 
//  1                      1
//  2                      2
//  3                      3
//  4                      4
//  5                      5
//  6                      6
//  7                      7
//  8                      8
//  9                      9
//  10                     A
//  11                     B
//  12                     C
//  13                     D
//  14                     E
//  15                     F

// and check the ASCII value its depend on it

// for example    1AC

// 1 = 1*(16 pow(2)) = 256
// A = 10*(16 pow(1)) = 160
// C = 12*(16 pow(0)) = 12 

// hexadecimal always work from the last

int main()
{
    char hexa[30];
    int sum = 0, len;
    int j =0;

    printf("Enter the hexadecimal Number: ");
    scanf("%s",&hexa);
    len = strlen(hexa);

    for(int i = len-1; i >= 0; i--)
    {
        printf("%d\n",sum);
        if(hexa[i] >= '0' && hexa[i] <= '9')
        {
            sum = sum+(hexa[i]-48)*pow(16,j);
            j++;
        }
        else if(hexa[i] >= 'A' && hexa[i] <= 'F')
        {
            sum = sum+(hexa[i]-55)*pow(16,j);
            j++;
        }
    }
    printf("Decimal value of %s is %d ",hexa,sum);
    return 0;
}
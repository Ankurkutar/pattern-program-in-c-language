
#include<stdio.h>

int main()
{
    int number,var, repeat, binary = 0, i = 1;
   printf("Enter a Decimal Number: ");
   scanf("%d",&number);

    var = number;

   while(number != 0)
   {
       repeat = number%2;
       number = number/2;
       binary = binary + (repeat*i);
       i = i*10;
   }
    printf("Binary value is %d ",binary);
    return 0;
}


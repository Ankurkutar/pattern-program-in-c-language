

// leap year program betwwen in range

#include <stdio.h>

int main()
{
    int start_Year, end_Year;
    printf("Enter the year to start Searching the leap year: ");
    scanf("%d", &start_Year);
    printf("Enter the year to end Searching the leap year: ");
    scanf("%d", &end_Year);
    printf("\nLeap year between %d to %d are:\n",start_Year,end_Year);

    for (int i = start_Year; i <= end_Year; i++)
    {
        if(((i%4==0)&&(i%100!=0))||(i%400==0))
        {
            printf("%d is leap year\n",i);
        }
    }
    return 0;
}
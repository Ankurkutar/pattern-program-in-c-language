//              1 
//           1  2
//        1  2  3
//     1  2  3  4
//  1  2  3  4  5
//     1  2  3  4
//        1  2  3
//           1  2
//              1

#include<stdio.h>

int main()
{
    int k =0,x;
    for(int i =1; i<=9;i++)
    {
        i<=5?k++:k--;
        x = 1;
        for(int j = 1; j<=5;j++)
        {
            if(j>=6-k)
            {
                printf(" %d ",x);
                x++;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
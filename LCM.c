#include<stdio.h>



int main()
{
    int a,b,max;
    scanf("%d%d",&a,&b);
    max = (a>b)? a:b;
    
    while(1){
        if(max%a==0&&max%b==0)
        {
            printf("lcm is a %d  and b %d  max %d ",a,b,max);
            break;
        }
       printf(" this line for test lcm is a %d  and b %d  max %d ",a,b,max);
        max++;
    }
    return 0;
}
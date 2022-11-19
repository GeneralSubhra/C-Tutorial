
#include<stdio.h>
int main()
{
    int  x,y,high,low;
    printf("enter first Number: ");
    scanf("%d",&x);
    printf("enter second Number: ");
    scanf("%d",&y);
    if(x>y)
    {
        high=x;
        low=y;
    }
    else
    {
        high=y;
        low=x;
    }
    if(high % low == 0)
    {
        printf("divisible");
    }
    else
    {
        printf("not divisible");
    }

    return 0;
}
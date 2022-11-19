#include<stdio.h>
int main()
{
    int a,b,c,d;
    float x;
    printf("enter the marks of 1st subject: ");
    scanf("%d",&a);
    printf("enter the marks of 2nd subject: ");
    scanf("%d",&b);
    printf("enter the marks of 3rd subject: ");
    scanf("%d",&c);
    printf("enter the marks of 4th subject: ");
    scanf("%d",&d);
    x=(a+b+c+d)/4; //stores the avanrage value
    printf("avarage marks %0.1f ",x);
    if(x>=80)
    {
        printf("A grade");
    }
    else if(x>50 && x<80)
    {
        printf("B Grade");
    }
    else if(x<50 && x >=30)
    {
        printf("C grade");
    }
    else
    {
      printf("Fail");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,c,*ptr3,*ptr1,*ptr2;
    printf("enter no 1: ");
    scanf("%d",&a);
    printf("enter no 2: ");
    scanf("%d",&b);
    printf("enter no 3: ");
    scanf("%d",&c);

    ptr1=&a;
    ptr2=&b;
    ptr3=&c;

    if(*ptr1>*ptr2 && *ptr1>*ptr3)
    {
        printf("%d is largest",*ptr1);
    }
     else if(*ptr2>*ptr3 && *ptr2>*ptr1)
    {
        printf("%d is largest",*ptr2);
    }
    else{
        printf("%d is largest",*ptr3);
    }
}
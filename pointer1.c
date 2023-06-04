#include<stdio.h>
int main()
{
    int a,*ptr;
    printf("input value: ");
    scanf("%d",&a);
    ptr = &a;
    *ptr = *ptr + 10;
    printf("The final value is:%p",ptr);
    printf("\nThe a value is:%p",&a);
    return 0;
}
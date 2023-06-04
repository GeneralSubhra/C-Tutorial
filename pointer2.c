#include<stdio.h>
int main()
{
    int a,b,*ptr,*ptr1,t;
    printf("enter no 1: ");
    scanf("%d",&a);
    printf("enter no 2: ");
    scanf("%d",&b);
    ptr=&a;
    ptr1=&b;
    t=*ptr;
    *ptr=*ptr1;
    *ptr1=t;

    printf("value after swap : %d , %d ",*ptr,*ptr1);

}
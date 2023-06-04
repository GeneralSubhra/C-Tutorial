#include<stdio.h>
void func(int &num)
{
    printf("primary value %d\n",num);
    num += 20;
    printf("after inc %d\n",num);
}

int main()
{
    int num = 10;
    func(num);
    printf("int main er num er value %d",num);
    return 0;
}
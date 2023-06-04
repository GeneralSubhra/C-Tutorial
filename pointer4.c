#include <stdio.h>

int main() {
    int arr[5], *ptr = arr, sum = 0;
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
      scanf("%d", ptr+i);
    for (int i = 0; i < 5; i++)
        sum += *(ptr+i);
    printf("The sum of the 5 elements is: %d", sum);
    return 0;
}
#include <stdio.h>     
int main()    
{       
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];    
    printf("Enter array elements\n ");
    for (i = 0; i < n; i++) 
    {   
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);     
    }          
    printf("Array in reverse order: \n");       
    for (int i = n-1; i >= 0; i--) 
    {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
}    
#include<stdio.h>
int main()
{
    int n,i,j=0,k=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n],odd[n],even[n];

    printf("enter array elements: ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    {
        even[j]=a[i];
        j++;
    }
    else
    {
        odd[k]=a[i];
        k++;
    }
    }

    printf("\nthe odd elements are:");
    for(i=0;i<k;i++)
    {
        printf("%d ",odd[i]);
    }
    
    printf("\nthe even elements are:");
    for(i=0;i<j;i++)
    {
        printf("%d ",even[i]);
    }
    

}
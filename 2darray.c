#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    printf("enter your elem for mat 1: \n");
    //input arr 1
    for(int i=0;i<3;i++) //row
    {
        for(int j=0;j<3;j++) //col
        {
            printf("Enter a[%d][%d]: ",i,j); 
            scanf("%d",&a[i][j]); //input
        }
    }
   //arr 2
    printf("enter your elem for mat 2 : \n");
      for(int i=0;i<3;i++) //row
    {
        for(int j=0;j<3;j++) //col
        {
            printf("Enter b[%d][%d]: ",i,j); 
            scanf("%d",&b[i][j]); //input
        }
    }
    //calc
    for(int i=0;i<3;i++) 
    {
        for(int j=0;j<3;j++) 
        {
         c[i][j]=a[i][j]+b[i][j];
        }
    }
    //output
    printf("Addition of two matrix is : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
//WAP that will take 2 words and check if they are same or not
#include<stdio.h>
#include<string.h>
int main()
{
    char s[200],p[200];
    int i,l,h,flag=0;
    printf("enter the 1st string: ");
    gets(s);
    printf("enter the 2nd string: ");
    gets(p);
    l=strlen(s);
    h=strlen(p);
    if(l!=h)
    {
        printf("Diffrent word");
    }
    else
    {
      for(i=0;i<l;i++)
      {
        if(s[i]!=p[i])
        {
            flag =1;
            break;  
        }
      }
        if(flag == 0)
        {
          printf("same word");
        }
        else
        {
         printf("diffrent word");
        }
    }
    return 0;
} 
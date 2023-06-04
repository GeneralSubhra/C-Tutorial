#include<stdio.h>
int main()
{
    int i;
    char s[500];
    printf("enter a sentence: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c",s[i]);
        if(s[i]==32)
        {
            printf("\n");
        }
    }
    return 0;
}

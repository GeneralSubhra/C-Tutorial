//WAP that will count how  many times 'a' keyword appears
#include<stdio.h>
int main()
{
    char s[200];
    int i,c=0;
    printf("enter the sentence: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' || s[i]=='A')
        {
          c++;
        }
    }
    printf("%d times 'a' keyword appears in the senstence ",c);
    return 0;
}
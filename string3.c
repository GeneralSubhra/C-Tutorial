//WAP that will take a sentence and print how many capital letter presents in the sentence
#include<stdio.h>
int main()
{
    char s[200];
    int i,c=0;
    printf("enter the sentence: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>= 65 && s[i]<= 90)
        {
          c++;
        }
    }
    printf("%d times capital letters appears in the senstence ",c);
    return 0;
}
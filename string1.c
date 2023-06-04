//wap that will count the number in a sentence
#include<stdio.h>
int main()
{
    char s[200];
    int i,c=0;
    printf("enter the sentence: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
          c++;
        }
    }
    printf("number of words: %d",c+1);
    return 0;
}
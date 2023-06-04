//wap that print the length of a string
#include<stdio.h>
int main()
{
    char s[200];
    int i,c=0;
    printf("enter the sentence: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
          c++;
    }
    printf("length of the string: %d",c);
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    int i,l;
    printf("enter the sentence: ");
    gets(s);
    l=strlen(s);
    printf("length of the string: %d",l);
    return 0;
} 
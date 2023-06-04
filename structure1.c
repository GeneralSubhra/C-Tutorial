#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    char class[10];
    char section[5];
    int id;
    int joinyear;
};

int main()
{
    struct student s[10];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
        printf("Enter the class of student %d: ", i + 1);
        fgets(s[i].class, sizeof(s[i].class), stdin);
        printf("Enter the section of student %d: ", i + 1);
        fgets(s[i].section, sizeof(s[i].section), stdin);
        printf("Enter the ID of student %d: ", i + 1);
        scanf("%d",&s[i].id);
        printf("Enter the joining year of student %d: ", i + 1);
        scanf("%d", &s[i].joinyear);
        getchar(); 
    }


    int d,flag=0;
    printf("enter the Id of student you want to search: ");
    scanf("%d",&d);
    
    for (int i = 0; i < 3; i++)
    {
        if(d == s[i].id)
        {
        flag = 1;
        printf("\nStudent Information:\n");
        printf("Name: %s", s[i].name);
        printf("Class: %s", s[i].class);
        printf("Section: %s", s[i].section);
        printf("ID: %d\n", s[i].id);
        printf("Joining Year: %d\n", s[i].joinyear);
        }
    }
   if(flag==0)
   {
    printf("Id not registered");
   }
    return 0;
}

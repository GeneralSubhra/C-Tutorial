#include<stdio.h>
#include<stdlib.h>
void create();
struct node
{
  int data; //4byte
  struct node *next; //4byte
};

struct node *head=NULL,*temp;
int main()
{
int c;
printf("enter size of linkedlist:\n ");
scanf("%d",&c);
while(c--)
{
  create(); 
}
return 0;
}
void create()
    {
    struct node *newnode=malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
}



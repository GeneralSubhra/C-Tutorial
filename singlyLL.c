#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertAtBeginning();
void insertAtEnd();
void insertAtGivenPos();
void DeleteFromBeg();
void DeleteFromEnd();
void DeleteFromgiven();
void getLength();
void reverse();
struct node
{
  int data;
  struct node *next;
};
struct node *head=NULL,*newnode,*temp,*nextnode,*prevnode,*currentnode;

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

void display()
{
  int count=0;
  temp=head;
  printf("the elements are: ");
  while(temp!=NULL)
  {
  printf("%d ",temp->data);
  temp=temp->next;
  count++;
  } 
}

void insertAtBeginning()
{
    struct node *newnode=malloc(sizeof(struct node));
    printf("enter data which you want to insert at beginning: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}

void insertAtEnd()
    {
    struct node *newnode=malloc(sizeof(struct node));
    printf("Enter the data you wAnt to insert at end: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0)
    {
      temp=temp->next;
    }
    temp->next=newnode;
  }

void insertAtGivenPos()
    {
    int pos,i=1;
    struct node *newnode=malloc(sizeof(struct node));
    printf("Enter the position: ");
    scanf("%d",&pos);
    newnode->next=0;

      temp=head;
      while(i<pos)
      {
      temp=temp->next;
      i++;
      }
      printf("Enter the data: ");
      scanf("%d",&newnode->data);
      newnode->next=temp->next;
      temp->next=newnode;
    }
  

void DeleteFromBeg()
{
  temp=head;
  head=head->next;
  free(temp);
}

void DeleteFromEnd()
{
   struct node *prevnode;
   temp=head;
   while(temp->next!=0)
   {
    prevnode=temp;
    temp=temp->next;
   }
   if(temp==head)
   {
    head=0;
   }
   else
   {
    prevnode->next=0;
   }
   free(temp);
}

void DeleteFromgiven()
{
   int pos,i=1;
   temp=head;
   printf("Enter the position: ");
   scanf("%d",&pos);
      while(i<pos-1)
      {
      temp=temp->next;
      i++;
      }
      nextnode=temp->next;
      temp->next=nextnode->next;
      free(nextnode);
}

void getLength()
{
  int count=0;
  temp=head;
  if(head==0)
  {
    printf("No elements found");
  }
  else{
    while(temp!=0)
    {
      count++;
      temp=temp->next;
    }
  }
  printf("\nlenght of the linked list is:%d",count);
}

void reverse()
  {
    prevnode=NULL;
    currentnode=nextnode=head;
    {
      while(nextnode!=NULL)
      {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
      }
    }
    head=prevnode;
    printf("Linked List reversed\n");
  }
int main()
{
int c;
printf("enter size of linkedlist:\n ");
scanf("%d",&c);
while(c--)
{
  create(); 
}
reverse();
display();
return 0;
}
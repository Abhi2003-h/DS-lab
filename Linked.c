#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node*link;
}*head;

void insert()
{
 int n,no,cho;
 printf("Enter where to insert the element\n1)at front\n2)at end\n3)at specific position\n");
 scanf("%d",&cho);
 printf("Enter the element to insert\n");
 scanf("%d",&n);
 struct node*ptr;
 struct node*temp;
 temp=(struct node*)malloc(sizeof(struct node));

 switch(cho)
 {
  case 1:
  { 
   temp->data=n;
   temp->link=head;
   head=temp;
   break;
  }
  case 2:
  {
   ptr=head;
   while(ptr->link!=NULL)
   {
    ptr=ptr->link;
   }
   temp->data=n;
   temp->link=NULL;
   ptr->link=temp;
   break;
  }
  case 3:
  {
   printf("Enter the data of node before the new node\n");
   scanf("%d",&no);
   ptr=head;
   while(ptr->link!=NULL&&ptr->data!=no)
   {
    ptr=ptr->link;
   }
   if(ptr->data==no)
   {
    temp->link=ptr->link;
    temp->data=n;
    ptr->link=temp;
   }
   else
   {
    printf("No such element in list\n");
   }
   break;
  }
  default:
  {
   printf("not valid option\n");
   break;
  }
 }
}
void delete()
{
 int cho,n;
  printf("Enter from where to delete the element\n1)at front\n2)at end\n3)at specific position\n");
  scanf("%d",&cho);
  struct node *ptr;
  struct node *prev;
  struct node *current;
  switch(cho)
  {
   case 1:
   {
 if(head==NULL)
 {
  printf("List empty\n");
 }
 else
 {
    ptr=head;
    head=ptr->link;
    printf("Deleted element is %d\n",ptr->data);
 }
    break;
   }
   case 2:
   {
  if(head==NULL)
 {
  printf("List empty\n");
 }
 else
 {
    prev=head;
    current=head;
    while(current->link!=NULL)
    {
     prev=current;
     current=current->link;
    }
    prev->link=NULL;
    printf("Deleted element is %d\n",current->data);
 }
    break;
   }
   case 3:
   {
  if(head==NULL)
 {
  printf("List empty\n");
 }
 else
 {
    prev=head;
    current=head;
    printf("Enter the data of the node to delete\n");
    scanf("%d",&n);
    while(current->link!=NULL&&current->data!=n)
    {
     prev=current;
     current=current->link;
    }
    if(current->data==n)
    {
     prev->link=current->link;
     printf("Deleted element is %d\n",current->data);
    }
    else
    {
     printf("Element not found in list\n");
    }
  }
    break;
   }
   default:
   {
    printf("Enter a valid option\n");
    break;
   }
  }
 }

void display()
{
 struct node*ptr;
 if(head==NULL)
 {
  printf("List is empty!!\n");
 }
 else
 {
  ptr=head;
  printf("Elements in list are\n");
  while(ptr->link!=NULL)
  {
   printf("%d\t",ptr->data);
   ptr=ptr->link;
  }
  if(ptr->link==NULL)
  {
   printf("%d\n",ptr->data);
  }
 }
}
void main()
{
 int choice;
  while(1)
 {
 printf("Enter the operation to perform on linked list\n1)insert\n2)delete\n3)display\n4)Exit\n");
 scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    insert();
    break;
   }
   case 2:
   {
    delete();
    break;
   }
   case 3:
   {
    display();
    break;
   }
   case 4:
   {
    exit(0);
   }
   default:
   {
    printf("Enter valid option\n");
    break;
   }
  }
 }
}

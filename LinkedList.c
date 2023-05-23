#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *nextNode;
};

struct Node *head = NULL;



void print_list()
{
    if(head==NULL)
    {
        printf("List is empty");
        return ;
    }

    struct Node *temp = head;

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->nextNode;
    }
    printf("\n");
}


void insert_at_first(int value)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    newNode->nextNode = head;
    head = newNode;
}


void insert_at_end(int value)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    newNode->nextNode = NULL;

    if(head==NULL)
    {
        printf("List is Empty");
        return 0;
    }

    struct Node *temp = head;

    while(temp->nextNode!=NULL)
    {
        temp=temp->nextNode;
    }

    temp->nextNode = newNode;
}



void insert_at_any(int s_value, int value)
{
    struct Node *temp = head;

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    while(temp!=NULL)
    {
        if(temp->data==s_value)
        {
            newNode->nextNode = temp->nextNode;
            temp->nextNode = newNode;
        }
        temp = temp->nextNode;
    }
}

void delete_end()
{
    struct Node *temp = head;

    while(temp->nextNode->nextNode != NULL)
    {
        temp = temp->nextNode;
    }
    temp->nextNode = NULL;
}

void delete_first()
{
    head = head->nextNode;
}

void  delete_any(int s_value)
{
    struct Node *temp = head;
    struct Node *prev;
    struct Node *target;

    while(temp!=NULL)
    {
        if(temp->nextNode->data==s_value)
        {
            prev=temp;
            target = temp->nextNode;
            break;
        }
        temp=temp->nextNode;
    }
    prev->nextNode=target->nextNode;
}


int main()
{

    insert_at_first(10);
    print_list();

    insert_at_end(123);
    insert_at_end(13);
    insert_at_end(12);
    print_list();

    insert_at_any(13,65);
    print_list();

    delete_end();
    print_list();

    delete_first();
    print_list();

    delete_any(13);
    print_list();

    return 0;
}

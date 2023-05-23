#include<stdio.h>
int top=0;


void push(int arr[], int sz, int value)
{
    if(top>=sz)
    {
        printf("stack in overflow!\n");
        return;
    }

    arr[top] = value;

    top = top+1;
}

int pop(int arr[])
{
    if(top==0)
    {
        printf("stack in underflow!\n");
        return;
    }

    int item = arr[top];

    top = top-1;

    return item;
}

void print_stack(int arr[])
{
    if(top<=0)
    {
        printf("Stack is empty\n");
        return 0;
    }
    for(int i=0; i<top; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
}



int main()
{
    int sz = 5;
    int arr[sz];

    push(arr,sz,10);
    push(arr,sz,20);
    push(arr,sz,30);

    print_stack(arr);

    pop(arr);

    print_stack(arr);

    printf("\n");
    return 0;
}

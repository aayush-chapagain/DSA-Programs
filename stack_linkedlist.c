#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = 0;

void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

void display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        while (temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void pop()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("Underflow\n");
    }
    else
    {
        top = top->next;
        free(temp);
    }
}

int main()
{
    push(3);
    push(5);
    push(10);
    display();
    pop();
    display();
    return 0;
}

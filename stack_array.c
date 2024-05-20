#include<stdio.h>
#define N 5
int stack[N];
int top = -1;

void push()
{
    int x;
    printf("Enter data: ");
    scanf("%d", &x);
    if (top == N - 1)
    {
        printf("Stack is Full\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        top--;
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n"); // Add newline for better readability
    }
}

int main()
{
    int c;
    while (1)
    {
        printf("Enter Your Choice:\n1) Push\n2) Pop\n3) Display\n4) Exit\n");
        scanf("%d", &c);
        switch (c)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                return 0;
            }
            default:
            {
                printf("Invalid Choice!\n");
            }
        }
    }
    return 0;
}

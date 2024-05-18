#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(rear == N-1)
    {
        printf("Queue is Full\n");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (rear == -1 && front == -1)
    {
        printf("Queue is Empty\n");
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void display()
{
    int i;
    if(front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    for(i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int main()
{
    enqueue(5);
    enqueue(10);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}
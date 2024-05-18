#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if((rear + 1) % N == front)
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
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % N;
    }
}

void display()
{
    int i;
    if(front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        for(i = front; i != rear; i = (i + 1) % N)
        {
            printf("%d ", queue[i]);
        }
        printf("%d ", queue[i]);
        printf("\n");
    }
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

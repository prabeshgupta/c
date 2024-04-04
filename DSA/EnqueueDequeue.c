#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int queue[10], choose, n, rear, front, x, i;

void enqueue();
void dequeue();
void display();

int main()
{
    front = rear = -1;
    printf("\nEnter the size of queue max[10]\n");
    scanf("%d", &n);

    printf("\n1 Enqueue\n2 Dequeue\n3 Displayn\n4 Exit");
    do
    {
        printf("\nEnter (1-4)\n");
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nSomething went wrong\n");
        }

    } while (choose != 4);
    return 0;
}

void enqueue()
{
    if (rear < n - 1)
    {

        printf("\nEnter a digit for enqueue\n");
        scanf("%d", &x);
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear += 1;
        }
        queue[rear] = x;
    }
    else
    {
        printf("\nQueue Overflow\n");
    }
}

void dequeue()
{

    if (front == -1)
    {
        printf("\nQueue Underflow\n");
    }
    else
    {
        x = queue[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front += 1;
            printf("\nThe deleted element is %d\n", queue[front]);
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        printf("\nThe elements in queue are\n");
        for (i = rear; i >= front; i--)
        {
            printf("\n%d", queue[i]);
        }
        printf("\nFront is %d\n", queue[front]);
    }
}
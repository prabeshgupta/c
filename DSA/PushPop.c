// Implementation of different operations on Stack

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int stack[20], top, choose, n, x, i;
void push();
void pop();
void display();

int main()
{
    top = -1;
    printf("\nEnter size of stack [max=20]:\n");
    scanf("%d", &n);

    printf("Stack Operations");
    printf("\n1 Push\n2 Pop\n3 Display\n4 Exit\n\n");
    do
    {
        printf("\nChoose number (1-4)\n");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

        default:
            printf("\nSomething went wrong!\n");
        }

    } while (choose != 4);
    return 0;
}

void push()
{
    if (top == n - 1)
    {
        printf("\nStack overflow\n");
    }
    else
    {
        printf("\nEnter a value for push\n");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack underflow\n");
    }
    else
    {

        printf("\nThe poped element is %d\n", stack[top]);
        top--;
    }
}

void display()
{
    if (top >= 0)
    {
        for (i = top; i >= 0; i--)
        {
            printf("\nThe elements are %d\n", stack[i]);
        }
    }
    else
    {
        printf("\nStack is empty\n");
    }
}
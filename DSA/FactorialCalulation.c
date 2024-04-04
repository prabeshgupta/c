#include <stdio.h>
#include <conio.h>

int fact(int);

void main()
{
    int f, n;

    printf("Enter a number\n");
    scanf("%d", &n);

    f = fact(n);
    printf("Factorial is %d", f);
    getch();
}

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
#include <stdio.h>
#include <conio.h>

int fibo(int); // Declaring Variable

void main()
{
    int a = 0, b = 1, n;

    printf("Enter a number\n");
    scanf("%d", &n);
    printf("%d %d", a, b);

    fibo(n - 2);

    getch();
}

int fibo(int n)
{
    static int a = 0, b = 1, c;

    if (n > 0)
    {
        c = a + b;

        printf(" %d", c);

        a = b;
        b = c;
        fibo(n - 1);
    }
}

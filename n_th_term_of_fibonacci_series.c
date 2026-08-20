#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, i = 1;

    printf("Enter the term number: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("The %dth Fibonacci term is %d", n, a);
    }
    else if (n == 2)
    {
        printf("The %dth Fibonacci term is %d", n, b);
    }
    else
    {
        while (i <= n - 2)
        {
            c = a + b;
            a = b;
            b = c;
            i++;
        }

        printf("The %dth Fibonacci term is %d", n, b);
    }

    return 0;
}
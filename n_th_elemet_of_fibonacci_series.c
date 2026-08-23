#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1)

        return 0;

    else if (n == 2)
        return 1;
   
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;

    printf("Enter the position: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
    else
    {
        printf("Fibonacci term (%d)= %d\n", n, fibonacci(n));
    }

    return 0;
}
#include <stdio.h>
/*
For recursive factorial, use int, because you need the function to return the answer.
 */
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    else
    {
        printf("Factorial of %d = %d\n", n, factorial(n));
    }
    return 0;
}
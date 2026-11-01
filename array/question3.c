/* Write a program to create an array of 10 integers and store multiplication table of 5 in
it. */
#include <stdio.h>
int main()
{
    int table[10], i = 5;
    for (int n = 1; n <= 10; n++)
    {
        table[n - 1] = 5 * n;
    }
    for (int n = 1; n <= 10; n++)
    {
        printf("\nThe array %d element is %d", (n - 1), table[n - 1]);
    }
    return 0;
}
// Repeat problem 3 for a general input provided by the user using scanf .
#include <stdio.h>
int main()
{
    int table[10], i;
    printf("Enter a Value: ");
    scanf("%d", &i);
    for (int n = 1; n <= 10; n++)
    {
        table[n - 1] = i * n;
    }
    for (int n = 1; n <= 10; n++)
    {
        printf("\nThe array %d element is %d", (n - 1), table[n - 1]);
    }
    return 0;
}
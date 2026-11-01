// Write a program to accept marks of five students in an array and print them on the screen.
#include <stdio.h>
int main()
{
    int marks[5], i;
    printf("Enter marks of five students:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("The array is:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);
    }
    return 0;
}
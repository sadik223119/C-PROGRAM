#include <stdio.h>

int main()
{
    int arr[5];
    int i;
    int *ptr;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // ptr=arr;
    ptr = &arr[0]; // arr means the address of the first element of the array, so we can also write ptr = arr;

    printf("Reverse array:\n");

    for (i = 4; i >= 0; i--)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
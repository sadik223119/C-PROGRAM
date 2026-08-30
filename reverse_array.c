#include <stdio.h>
// Function to reverse the array
void reverse(int arr[], int n)  // use void as return type since we are not returning anything from this function
{
    int i, temp;

    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main()
{
    int arr[6];
    int i;

    printf("Enter 6 numbers:\n");

    for (i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse(arr, 6);

    printf("Reversed array: ");

    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
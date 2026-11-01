#include <stdio.h>

int main()
{
    int n, i = 0, k = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 2; i++)
    {
        if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0 && arr[i + 2] % 2 != 0)
        {
            k = -1;
            break;
        }
    }

    if (k == -1)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}
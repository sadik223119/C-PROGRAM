#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 34, 3, 4, 5, 7, 23, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 0;

    for (int i = 0; i < n - 2; i++)
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
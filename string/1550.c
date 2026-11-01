#include <stdio.h>
int main()
{

    int arr[10] = {1, 2, 34, 3, 4, 5, 7, 23, 12}, n, k = 0;
    n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0 && arr[i + 2] % 2 != 0)
        {
            k = -1;
        }
    }
    if (k == -1)
    {
        printf("true");
    }
    else
        printf("false");
    return 0;
}
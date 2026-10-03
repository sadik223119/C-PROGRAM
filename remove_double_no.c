// To remove duplicate elements in a single dimensional array

#include <stdio.h>

int main()
{
    int a[20], n, i, j, ele;

    printf("\nEnter array limit(n): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Removal of duplicate
    for (i = 0; i < n - 1; i++)
    {
        ele = a[i];

        for (j = i + 1; j < n; j++)
        {
            if (ele == a[j] && a[j] != -111)
            {
                printf("\n%d duplicate entry!!!", a[j]);
                a[j] = -111; // Set -111 for duplicate entry
            }
        }
    }

    printf("\nFinal Array List");

    for (i = 0; i < n; i++)
    {
        if (a[i] != -111)
            printf("\n %d", a[i]);
    }

    return 0;
}
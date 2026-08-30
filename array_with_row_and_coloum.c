#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter the no of rows and coloums of your array ");
    scanf("%d %d", &n1, &n2);
    printf("you have entered %d rows and %d coloums\n", n1, n2);
    int arr[n1][n2];
    int i, j;
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("You have entered the following array\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
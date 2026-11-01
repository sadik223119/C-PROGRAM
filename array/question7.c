/* Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and
9 respectively. */
#include <stdio.h>
int main()
{
    int i = 3, j = 10;
    int table[i][j];
    int nums[3] = {2, 7, 9};

    for (int m = 0; m < i; m++)
    {
        for (int n = 0; n < j; n++)
        {
            table[m][n] = nums[m] * (n + 1);
        }
    }

    for (int m = 0; m < i; m++)
    {
        for (int n = 0; n < j; n++)
        {
            printf("%d * %d = %d\n", nums[m], n + 1, table[m][n]);
        }
        printf("\n");
    }

    return 0;
}
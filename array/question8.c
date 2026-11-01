// Repeat problem 7 for a custom input given by the user.
#include <stdio.h>
int main()
{
    int table[3][10];
    int nums[3];
    printf("Enter three numbers: ");
    for (int a = 0; a < 3; a++)
    {
        scanf("%d", &nums[a]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = nums[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 10; j++)
        {
            printf("%d*%d=%d\n", nums[i], (j + 1), table[i][j]);
        }
        printf("\n");
    }
}
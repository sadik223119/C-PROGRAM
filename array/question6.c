/* Write a program containing functions which counts the number of positive integers in
an array. */
#include <stdio.h>
void checkneg(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }
    printf("\nNegetive Count = %d", count);
}
void checkpos(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    printf("\nPositive Count = %d", count);
}
int main()
{
    int num[7] = {1, 5, -8, -9, -4, 6, 8};
    checkneg(num, 7);
    checkpos(num, 7);
    return 0;
}
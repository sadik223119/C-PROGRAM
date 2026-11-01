// Write a program containing a function which reverses the array passed to it.
#include <stdio.h>
void fnprint(int arr[], int i)
{
    for (int n = 0; n < i; n++)
    {
        printf("\n%d", arr[n]);
    }
}
void reverse(int arr[], int i)
{
    for (int n = 0; n < i / 2; n++)
    {
        int temp = arr[n];
        arr[n] = arr[i - n - 1];
        arr[i - n - 1] = temp;
    }
}
int main()
{
    int table[5] = {1, 2, 3, 4, 5};
    reverse(table, 5);
    fnprint(table, 5);
    return 0;
}
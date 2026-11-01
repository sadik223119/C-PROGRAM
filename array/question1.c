/* Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to
the third element where ptr is a pointer pointing to the first element of the array. */
#include <stdio.h>
int main()
{
    int num[10];
    int *ptr = &num[0];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr + 2));
    return 0;
}
#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 3;
    int b = 4; // a is 3 and b is 4
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0; // now a is 4 and b is 3
}
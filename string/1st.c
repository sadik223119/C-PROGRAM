// swap two number
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("Enter Swapped Numbers: %d %d", a, b);
    return 0;
}
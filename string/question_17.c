// 17. To swap two numbers using pointers

#include <stdio.h>
int main()
{
    int n1, n2, *ptr1, *ptr2, temp;
    printf("Enter Two Number: ");
    scanf("%d %d", &n1, &n2);
    printf("\nBefore Swapping the No is %d and %d", n1, n2);
    ptr1 = &n1;
    ptr2 = &n2;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("\nAfter Swapping the No is %d and %d", *ptr1, *ptr2);
    return 0;
}
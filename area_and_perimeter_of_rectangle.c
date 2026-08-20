#include <stdio.h>
int main()
{
    float a, area, b, p;
    printf("Enter the Length : ");
    scanf("%f", &a);
    printf("Enter the Base : ");
    scanf("%f", &b);
    p = 2 * (a + b);
    area = (a * b);
    printf("The Perimeter Of Rectangle is : %f\n", p);
    printf("The Area Of Rectangle is : %f\n", area);
    return 0;
}
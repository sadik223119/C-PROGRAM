#include <stdio.h>
int main()
{
    float a, area, c;
    printf("Enter the Radius of Circle : \n");
    scanf("%f", &a);
    c = (2 * 3.14 * a);
    area = (3.14 * a * a);
    printf("The Circumference Of Circle is : %f\n", c);
    printf("The Area Of Circle is : %f\n", area);
    return 0;
}

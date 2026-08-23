#include <stdio.h>
float force(float);
float force(float m)
{
    printf("Force on the body is: %.2f\n", m * 9.8);
    return m * 9.8;
}
/* if use void function then it will not return any value, so we can use void function as well.
void force(float);
void force(float m)
{
    printf("Force on the body is: %.2f\n", m * 9.8);
} */

int main()
{
    float n;
    printf("Enter mass of the body: ");
    scanf("%f", &n);
    force(n);
    return 0;
}
#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c =(5*f-160)/9;
    printf("Temperature in Celsius is : %f", c);
    return 0;
}
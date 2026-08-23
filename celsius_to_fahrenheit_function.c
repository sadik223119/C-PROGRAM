#include<stdio.h>
float C_to_f(float);
float C_to_f(float celsius)
{
    float fahrenheit;
    fahrenheit = (celsius * 9 +160) / 5;
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
    return fahrenheit;
}
int main()
{
    float n;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &n);
    C_to_f(n);
    return 0;
}
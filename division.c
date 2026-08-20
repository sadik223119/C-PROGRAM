#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter your first number (which you want to divide): \n");
    scanf("%d", &a);
    printf("Enter your second number(by which number you want to divide): \n");
    scanf("%d", &b);
    c = a / b;
    printf("The Final Answer is = %.2f", c);
    return 0;
}
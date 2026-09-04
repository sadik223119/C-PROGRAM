// write a c program to convert a integer to float and float to integer
#include <stdio.h>

int main()
{
    int a;
    printf("Enter your no ");
    scanf("%d", &a);
    float result = (float)a;
    printf("Your float Converted no is %f \n", result);
    int result2 = (int)result;
    printf("Your integer Converted no is %d \n", result2);
    double result3 = (double)result2;
    printf("Your double Converted no is %f \n", result3);
    return 0;
}
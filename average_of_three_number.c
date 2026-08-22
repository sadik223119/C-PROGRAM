#include<stdio.h>

void avg(float a, float b, float c) //for int use return else use void
{
    printf("Calculating average of three numbers: %.2f\n", (a + b + c) / 3);
}

int main()
{
    float a, b, c;
    printf("Enter three numbers to find average: \n");
    scanf("%f %f %f", &a, &b, &c);
    avg(a, b, c);
    return 0;
}